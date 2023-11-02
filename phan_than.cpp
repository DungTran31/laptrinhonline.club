#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    ll koi = 1;
    while (koi < n)
    {
        koi *= 2;
        cnt++;
    }
    cout << cnt;
}