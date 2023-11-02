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
    if(n%1000==0) n/=100;
    else n= n/100+1;
    cout << n;
    return 0;
}

