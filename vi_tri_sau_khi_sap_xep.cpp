#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int, int> mp;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }

    for (auto x : mp) {
        cout << x.second + 1 << " ";
    }
    
    

    return 0;
}

