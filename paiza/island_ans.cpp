#include<iostream>
#include<queue>
using namespace std;

// 縦横の移動用
int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};

int main(){
    int m, n;
    cin >> m >> n;
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    int answer = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 0)  continue;
            answer++;
            mat[i][j] = 0;
            queue<pair<int,int>> q;
            q.push({i, j});
            while(!q.empty()){
                pair<int,int> p = q.front();    q.pop();
                for(int k = 0; k < 4; k++){
                    int ni = p.first+di[k];
                    int nj = p.second+dj[k];
                    if(ni < 0 || n <= ni || nj < 0 || m <= nj)  continue;
                    if(mat[ni][nj] == 0)    continue;
                    mat[ni][nj] = 0;
                    q.push({ni, nj});
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}