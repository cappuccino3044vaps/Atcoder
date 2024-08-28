#include<iostream>
#include<numeric>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;

    // 立方体の一辺の長さを求める
    long long side = gcd(A, gcd(B, C));

    // 各辺を立方体の一辺の長さで割った商を求める
    long long cutsA = A / side - 1;
    long long cutsB = B / side - 1;
    long long cutsC = C / side - 1;

    // 必要な切断回数の合計
    long long totalCuts = cutsA + cutsB + cutsC;

    cout << totalCuts << endl;
    return 0;
}