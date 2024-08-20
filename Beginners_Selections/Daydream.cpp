#include <iostream>
#include <string>

using namespace std;

bool can_form_string(string);

int main() {
    string S;
    cin >> S;

    if (can_form_string(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

bool can_form_string(string S) {
    // 文字列Sが空になるまで繰り返す
    if(S.size()<5){
        return false;
    }
    while (!S.empty()) {
        if (S.size()>=5 && S.substr(S.size() - 5) == "dream") { // "dream"で終わるか判定
            S.erase(S.size() - 5); // "dream"を取り除く
        } else if (S.size()>=7 && S.substr(S.size() - 7) == "dreamer") { // "dreamer"で終わるか判定
            S.erase(S.size() - 7); // "dreamer"を取り除く
        } else if (S.size()>=5 && S.substr(S.size() - 5) == "erase") { // "erase"で終わるか判定
            S.erase(S.size() - 5); // "erase"を取り除く
        } else if (S.size()>=6 && S.substr(S.size() - 6) == "eraser") { // "eraser"で終わるか判定
            S.erase(S.size() - 6); // "eraser"を取り除く
        } else {
            // 上記のいずれの文字列でも終わっていない場合、Sを空にすることはできない
            return false;
        }
    }
    // Sが空になった場合、Tと同じになることができる
    return true;
}