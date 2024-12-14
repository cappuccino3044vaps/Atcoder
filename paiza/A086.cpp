//Pythonの方がなぜかランタイムエラーとなるのでC++で書き直した(100点になった)
//アルゴリズムは一緒なのになぜかPythonだとランタイムエラーになる。原因は不明。
//違いは2次元配列の入力を受け取るところ。
//Pythonは行ごと、C++は一文字ずつ
//あとC++は参照渡しを明示的に書いているが、関係あるのかは不明(なさそう)
#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<char>>& A,vector<vector<bool>>& visited,int i,int j){
    if(i<0||i>=A.size()||j<0||j>=A[0].size()||A[i][j]=='#'||visited[i][j]==true){
        return;
    }
    visited[i][j]=true;
    dfs(A,visited,i+1,j);
    dfs(A,visited,i-1,j);
    dfs(A,visited,i,j+1);
    dfs(A,visited,i,j-1);
}
int main(){
    int H,W;
    cin>>H>>W;
    vector<vector<char>> A(H,vector<char>(W));
    vector<vector<bool>> visited(H,vector<bool>(W,false));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>A[i][j];
        }
    }
    int count=0;
    for (int i=0;i<H;i++){
        for (int j=0;j<W;j++){
            if(A[i][j]=='.'&&visited[i][j]==false){
                dfs(A,visited,i,j);
                count++;
            }
        }
    }
    cout<<count<<endl;
}