#include <bits/stdc++.h>

#define ll long long
#define endl "\n" 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    ll a[n]; for(auto &x:a) cin >> x;
    int i=0;
    vector<ll> v;
    ll maxv=-10e9, minv=10e9; 
    for(int i=0; i<n; i++){
        v.push_back(a[i]);
        maxv=max(a[i],maxv);
        minv=min(a[i],minv);
        if(v.size()>=2){
            ll x=maxv, y=minv;
            v.push_back(x+y/2);
            v.push_back(y-x/2);
            maxv=max(max(maxv,x+y/2),y-x/2);
            minv=min(min(minv,x+y/2),y-x/2);
            cout << (maxv+minv)/2 << " ";
        }
    }
}