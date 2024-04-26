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
    map<string,int> mp;
    int n; cin >> n;
    string S[n];
    for (int i = 0; i < n; i++){
        cin >> S[i];
        mp[S[i]]++;
    }
    int m; cin >> m;
    string Q[m];
    for (int i = 0; i < m; i++){
        cin >> Q[i];
        int res = 0;
        for (auto it:mp){
            if(Q[i] == it.first) {
                res = it.second;
            }
        }
        cout << res << endl;
    }

    return 0;
}

