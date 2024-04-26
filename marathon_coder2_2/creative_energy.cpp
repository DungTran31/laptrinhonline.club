#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;

        int l = 0;
        int r = n - 1;
        int res = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (a[m] == k) {
                res = m + 1;  // Vị trí bắt đầu từ 1
                r = m - 1;  // Tiếp tục tìm ở bên trái
            } else if (a[m] < k) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        cout << res << endl;
    }
    return 0;
}

