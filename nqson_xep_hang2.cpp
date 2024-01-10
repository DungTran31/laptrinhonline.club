#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n, i;
    cin >> n;
    vector<int> a(n);
    vector<int> ans(n, -1);
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    stack<int> b, c;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> d;
    for(i = 0; i < n; i++){
        if(d.size()){
            while(a[i] > d.top().first){
                ans[d.top().second] = a[i];
                d.pop();
                if(!d.size()) break;
            }
        }
        if(b.size() && c.size()){
            while(a[i] > b.top()){
                d.push({b.top(), c.top()});
                b.pop();
                c.pop();
                if(!b.size()) break;
            }
        }
        b.push(a[i]);
        c.push(i);
    }
    for(i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
    solve();
    }
}