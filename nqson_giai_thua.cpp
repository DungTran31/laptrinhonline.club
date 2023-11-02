#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const long MOD = (long)2e9 + 14;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<long> a(n);
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x; cin >> x;
    sort(a.begin(),a.end());
    vector<long> gt(1000005, 0);
    gt[0] = 1;
    for (int i = 1; i <= 1000000; i++){
        gt[i] = (gt[i - 1] * i) % MOD;  // Sử dụng toán tử % để tránh tràn số.
    }
    long ans = 1;
    for (int i = 0; i < n-1; i++){
        ans = (ans * gt[a[i]]) % MOD;
    }
    // tính luôn phép chia a[n-1]! / x!
    for (int i = x+1; i <= a[n-1]; i++)
    {
        ans = (ans * i) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}

