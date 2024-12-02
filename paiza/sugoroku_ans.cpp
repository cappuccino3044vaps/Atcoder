#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T, B, U, D, L, R;
  cin >> T >> B >> U >> D >> L >> R;
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  // opposite[i] := サイコロの上の面の数字が i であるときその裏面の数字
  vector<int> opposite(7);
  opposite[T] = B;
  opposite[B] = T;
  opposite[U] = D;
  opposite[D] = U;
  opposite[L] = R;
  opposite[R] = L;

  int ans = 0;      // 回転操作回数の合計
  int prev = P[0];  // 現在のサイコロの上の面の数字
  for (int i = 1; i < N; i++) {
    if (P[i] == prev) {
      ;
    } else if (opposite[prev] == P[i]) {
      ans += 2;
    } else {
      ans += 1;
    }

    prev = P[i];
  }

  cout << ans << endl;
}