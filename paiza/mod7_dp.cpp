#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> count(7, 0);
    int sum = 0;

    for(int i = 0; i < N; i++){
        cin >> a[i];
        count[a[i] % 7]++;
    }

    // 3つの数の組み合わせが7の倍数になる条件を満たす組み合わせを計算
    // (0, 0, 0)
    if(count[0] >= 3){
        sum += count[0] * (count[0] - 1) * (count[0] - 2) / 6;
    }
    // (x, x, 7-2x)
    for(int x = 1; x < 7; x++){
        sum += count[x] * (count[x] - 1) * count[7 - 2 * x] / 2;

    }

    // (x, y, 7-x-y)
    for(int x = 0; x < 7-3; x++){
        for(int y = x + 1; y < 7-2; y++){
            int z = 7 - x - y;
            if (z > y) {
                    sum += count[x] * count[y] * count[z];
            }
        }
    }

    cout << sum << endl;
    return 0;
}