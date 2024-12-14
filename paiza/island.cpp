#include<iostream>
#include<vector>

using namespace std;
void dfs(vector<vector<int>>& A,vector<vector<bool>>& visited,int i,int j){
    if(i<0||i>=A.size()||j<0||j>=A[0].size()||A[i][j]==0||visited[i][j]==true){
        return;
    }
    visited[i][j]=true;
    dfs(A,visited,i+1,j);
    dfs(A,visited,i-1,j);
    dfs(A,visited,i,j+1);
    dfs(A,visited,i,j-1);
}

int main(){
    //4 5のようにスペース区切りの入力を受け取る
    int N,M;
    cin >> M >> N;
    //N行M列の行列を受け取る
    //1 2 3 4 5のようにスペース区切りの入力をN行受け取る
    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A.at(i).at(j);
        }
    }
    int count=0;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if(A[i][j]==0&&visited[i][j]==false){
                dfs(A,visited,i,j);
                count++;
            }
        }
    }
    cout<<count<<endl;
}
