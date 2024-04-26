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
    while (n--)
    {
        long x;
        cin >> x;
        long k = x;
        unordered_map<long, long>mp;
        for(long i = 2; i * i <= x;i++){
            while(x % i == 0){
                mp[i]++;
                x /= i;
            }
        }
        long res = 1;
        for(auto x : mp) res *= pow(x.first,x.second/2);
        cout << res << " " << k / (res * res) << endl;
    }
    
    return 0;
}

