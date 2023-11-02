#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;


long fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<long> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (long i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + 1) % MOD;
    }

    return dp[n];
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin >> n;
    long res = fibo(n);
    cout << res << endl;

    return 0;
}

