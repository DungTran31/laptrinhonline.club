#include <iostream>
#include <vector>
using namespace std;

// Hàm tính tổ hợp chập k của n
long long calculateCombination(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }

    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res *= (n - i + 1);
        res /= i;
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        long long res = calculateCombination(n, k);
        cout << res << endl;
    }

    return 0;
}
