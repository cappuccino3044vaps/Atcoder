#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& vec) {
    for (const int& num : vec) {
        cout << num << " "; // 各要素を表示
    }
    cout << endl; // 改行
}

int countCombinations(const vector<int>& A, int P, int Q) {
    int count = 0;
    int n = A.size();

    // 1 << n は 2^n を表す
    for (int mask = 0; mask < (1 << n); ++mask) {
        vector<int> current;
        long long product = 1;
        int selectedCount = 0;

        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) { // i番目の要素を選択
                current.push_back(A[i]);
                product *= A[i];
                selectedCount++;
            }
        }

        if (selectedCount == 5 && product % P == Q) {
            count++;
        }
        printVector(current);
    }

    return count;
}

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = countCombinations(A, P, Q);
    cout << result << endl;

    return 0;
}