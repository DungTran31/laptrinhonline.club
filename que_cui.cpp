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
    long n; cin >> n;
    long a[n];
    long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    long cnt = 0;
    sort(a,a+n);
    long target = a[n/2];
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=sum) {
            cnt += abs(target-a[i]);
        }
    }
    cout << cnt;
    return 0;
}

