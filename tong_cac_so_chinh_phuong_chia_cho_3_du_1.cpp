#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

long squaresum(long n){ // tính tổng bình phương của các số từ 1 đến n
    long x = n, y = n + 1, z = 2 * n + 1;
    // n là số lẻ hay chẵn, nếu lẻ, giảm giá trị của y đi một nửa, ngược lại giảm giá trị của x đi một nửa.
    n % 2 ? y = y / 2 : x = x / 2; 
    if (x % 3 == 0)
        x /= 3;
    else if (y % 3 == 0)
        y /= 3;
    else
        z /= 3;
    x %= MOD;
    y %= MOD;
    z %= MOD;
    return x * y % MOD * z % MOD;
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    cin >> t;
    while (t--)
    {
        long m, n, k;
        cin >> m;
        n = floor(sqrt(m));
        k = floor(sqrt(m / 9));
        long res = squaresum(n) - 9 * squaresum(k);
        cout << (res % MOD + MOD) % MOD << endl;
    }
}