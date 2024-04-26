#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<ll, int> mp;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }
    ll res = 0, temp = 0;
    for (int i = 0; i < m; i++)
    {
        temp += mp[i];
        if (!temp)
            res++;
    }
    cout << res;
    return 0;
}