#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<int> two_powers(n + 1);
    two_powers[0] = 1;
    for (int i = 1; i <= n; i++) {
        two_powers[i] = (two_powers[i - 1] * 2) % MOD;
    }


    
    // Check if 2^n is a factor of 3^x - 1
    long long x = 1;
    long long res = 1;
    
    while (x <= n + 1) {
        res = (res * 3) % two_powers[n];
        if (res == 1) {
            cout << x << endl;
            return 0;
        }
        x++;
    }

    cout << "0" << endl;

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }

    long long x = 1;
    long long res = 1;

    for (long long i = 1; i <= n; i++) {
        res = (res * 3) % (1LL << n);
        if (res == 1) {
            cout << x << endl;
            return 0;
        }
        x++;
    }

    cout << "0" << endl;

    return 0;
}

*/