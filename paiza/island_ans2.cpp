#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main (int argc, char* argv[]) {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> lands (n, vector<int> (m));

  for (auto i = 0; i < n; i++)
    for (auto j = 0; j < m; j++) cin >> lands[i][j];

  int count = 0;

  stack<pair<int, int>> stack;

  for (auto i = 0; i < n; i++) {
    for (auto j = 0; j < m; j++) {
      if (lands[i][j] == 0) continue;

      stack.push ({ i, j });
      count++;

      while (!stack.empty ()) {
        const auto [y, x] = stack.top ();
        stack.pop ();
        lands[y][x] = 0;

        if (y > 0 && lands[y - 1][x] == 1) {
          stack.push ({ y - 1, x });
        }
        if (x > 0 && lands[y][x - 1] == 1) {
          stack.push ({ y, x - 1 });
        }
        if (y < n - 1 && lands[y + 1][x] == 1) {
          stack.push ({ y + 1, x });
        }
        if (x < m - 1 && lands[y][x + 1] == 1) {
          stack.push ({ y, x + 1 });
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}