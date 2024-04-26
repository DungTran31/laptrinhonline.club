#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int threes = n / 3;
        int remain = n % 3;

        long long res = 1;
        for (int i = 0; i < threes; ++i) {
            res *= 3;
        }

        if (remain == 1) {
            res = res / 3 * 4;
        } else if (remain > 1) {
            res *= remain;
        }

        cout << res << endl;
    }

    return 0;
}
