#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//幅優先探索（キューを使って実装）q_0はs地点から
int bfs(vector<vector<char>>& A, int H, int W, int start_i, int start_j) {
    vector<vector<bool>> visited(H, vector<bool>(W,false));
    queue<pair<int,int>> q;
    q.push({start_i, start_j});
    visited[start_i][start_j] = true;
    int distance = 0;
    vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

    //探索できなくなるまで
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size;i++) {
            auto [x, y] = q.front();
            //cout<<distance<<" "<<x<<" "<<y<<endl;
            q.pop();
            
            if (A[x][y] == 'g') {
                return distance;
            }
            for (auto [dx, dy] : directions) {
                int X = x + dx, Y = y + dy;
                if (X >= 0 && X < H && Y >= 0 && Y < W && A[X][Y] != '1' && !visited[X][Y]) {
                    visited[X][Y] = true;
                    q.push({X, Y});
                }
            }
        }distance++;
    }
    return -1;
}
int main(){
    int H,W;
    cin>>W>>H;
    vector<vector<char>> A(H,vector<char>(W));
    int start_i,start_j;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            if (A[i][j] == 's') {
                start_i = i;
                start_j = j;
            }
        }
    }

    int result = bfs(A, H, W, start_i, start_j);
    if (result == -1) {
        cout << "Fail" << endl;
    }else{
        cout << result << endl;
    }
}