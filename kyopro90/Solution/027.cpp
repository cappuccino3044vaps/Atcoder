#include <iostream>
#include <string>
#include <set>

using namespace std; // ここで using namespace を追加

int main() {
  int n; cin >> n; // std:: を省略
  set<string> set;
  for (int i = 1; i <= n; ++i) {
    string s; cin >> s; // std:: を省略
    if (set.insert(s).second) {
      cout << i << endl; // std:: を省略
    }
  }
}