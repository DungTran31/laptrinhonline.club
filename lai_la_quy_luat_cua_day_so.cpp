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
    long t; cin >> t;
    while (t--)
    {
        long n; cin >> n;
        cout << (n*(n-1)/2)+1 << endl;
    }
    
    return 0;
}

