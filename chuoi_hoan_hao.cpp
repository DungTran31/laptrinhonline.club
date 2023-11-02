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
    string s; cin >> s;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    bool check = true;
    for (auto it : mp) {
        if(it.second%2==1) {
            check = false;
            break;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    
    
    return 0;
}

