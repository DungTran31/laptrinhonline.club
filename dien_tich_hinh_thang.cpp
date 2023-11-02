#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double a, b, c, h, s;
    double degree = 45;
    double radian = degree * M_PI / 180.0;
    cin >> a >> b;
    if (a > b) swap(a, b);
    c = (b - a) / 2;
    h = tan(radian) * c;
    s = h * (a + b) / 2;
    cout << setprecision(2) << fixed << s;

    return 0;
}
