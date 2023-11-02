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
    int l, k; cin >> l >> k;
    int n; cin >> n;
    int a[n], dan=0, dem=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i=0; i<n; i++)
        if (dan<a[i]) {
            dem++;
            dan=a[i]+k-1;
        }
    cout << dem;
}