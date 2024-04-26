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
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    if(!a[0]) cout << 0;
    else if(a[n-1] == 1) cout << 1;
    else {
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != 1) {
                sum += a[i];
            }
        }
        cout << sum;
    }
    return 0;
}

