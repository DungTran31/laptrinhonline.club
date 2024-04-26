#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int moves = 0;
    int max_val = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] > max_val) {
            max_val = a[i];
        } else {
            a[i] = max_val + 1;
            max_val = a[i];
            moves++;
        }
    }
    cout << moves;

    return 0;
}
