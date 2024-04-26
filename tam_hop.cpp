#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    int n;
    cin >> n;

    int a[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int maxLeft[n + 1];
    int maxRight[n + 1];
    memset(maxLeft, 0, sizeof(maxLeft));
    memset(maxRight, 0, sizeof(maxRight));
    maxLeft[2] = a[1];
    maxRight[n - 1] = a[n];

    for(int i = 3; i <= n; i++) {
        maxLeft[i] = max(maxLeft[i - 1], a[i - 1]);
    }

    for(int j = n - 2; j >= 1; j--) {
        maxRight[j] = max(maxRight[j + 1], a[j + 1]);
    }

    int res = INT_MIN;
    for(int i = 2; i <= n - 1; i++) {
        res = (res < maxLeft[i] - a[i] + maxRight[i]) ? maxLeft[i] - a[i] + maxRight[i] : res;
    }
    cout << res;
    return 0;
}
