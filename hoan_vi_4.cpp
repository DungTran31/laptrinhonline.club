#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

bool isSumDivisibleBy4(int a, int b) {
    return (a + b) % 4 == 0;
}

void generatePermutations(int n, int permutation[], bool chosen[], int& cnt, int index) {
    if (index == n) {
        bool valid = true;
        for (int i = 1; i < n; ++i) {
            if (isSumDivisibleBy4(permutation[i - 1], permutation[i])) {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int i = 0; i < n; ++i) {
                cout << permutation[i] << " ";
            }
            cout << endl;
            cnt++;
        }
        return;
    }

    for (int i = 1; i <= n; ++i) {
        if (!chosen[i]) {
            chosen[i] = true;
            permutation[index] = i;
            generatePermutations(n, permutation, chosen, cnt, index + 1);
            chosen[i] = false;
        }
    }
}

main() {
    int n;
    cin >> n;

    int permutation[n];
    bool chosen[n + 1] = {false};
    int cnt = 0;

    generatePermutations(n, permutation, chosen, cnt, 0);

    cout << cnt << endl;

    return 0;
}

