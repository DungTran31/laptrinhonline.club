#include <bits/stdc++.h>
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans = 0;
    int j = n/2;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i]-a[j]);
    }
    cout << ans;
    
    return 0;
}

