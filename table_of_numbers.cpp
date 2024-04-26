#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const long limit = 1e9;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n; cin >> m >> n;
    int a[m][n];
    int dp[m][n];
    int count[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            dp[i][j] = limit;
            count[i][j] = 0;
        }
    }

    dp[0][0] = a[0][0];
    count[0][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                if (a[i][j] > 0) {
                    if (dp[i - 1][j] + a[i][j] < dp[i][j]) {
                        dp[i][j] = dp[i - 1][j] + a[i][j];
                        count[i][j] = count[i - 1][j];
                    } else if (dp[i - 1][j] + a[i][j] == dp[i][j]) {
                        count[i][j] += count[i - 1][j];
                    }
                }
            }
            if (j > 0) {
                if (a[i][j] > 0) {
                    if (dp[i][j - 1] + a[i][j] < dp[i][j]) {
                        dp[i][j] = dp[i][j - 1] + a[i][j];
                        count[i][j] = count[i][j - 1];
                    } else if (dp[i][j - 1] + a[i][j] == dp[i][j]) {
                        count[i][j] += count[i][j - 1];
                    }
                }
            }
        }
    }
    cout << dp[m - 1][n - 1] << " " << count[m - 1][n - 1] << endl;

    return 0;
}

