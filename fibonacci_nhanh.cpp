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
    cout << setprecision(1) << fixed;
    cout << (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    return 0;
}

