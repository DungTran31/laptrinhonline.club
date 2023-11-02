#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, s, t, res = 0;
    cin >> n >> s >> t;
    if(s>t){
        res = n - t + 1;
    }else if (s == t && s + t >= n) {
        res = t + 1;
    }else{
        res = n - s + 1;
    }
    cout << res;

    return 0;
}