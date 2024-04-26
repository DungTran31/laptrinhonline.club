#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;
long csc(long a){
    return (a - 1) * (a) / 2;
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long a, b;
    cin >> a >> b;
    long lop = a / b;
    long du = a % b;
    long ans1 = b * csc(lop) + du * (lop);
    long ans2 = csc(a - b + 1);
    if (a <= b)
    {
        cout << "0 0";
    }
    else
    {
        cout << ans1 << " " << ans2;
    }
    return 0;
}
