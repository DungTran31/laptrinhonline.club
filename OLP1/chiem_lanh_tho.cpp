#include <bits/stdc++.h>
#define int long
#define long long long
const int mod = 1000000007;
using namespace std;


main() {
    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        int xXanh, yXanh;
        cin >> xXanh >> yXanh;
        char c;
        cin >> c;
        if (c == 'U') {
            int yDo = yXanh - 1;
            if (h - yDo == yDo)
                cout << "DRAW\n";
            else if (h - yDo > yDo)
                cout << "BLUE\n";
            else
                cout << "RED\n";
        } else if (c == 'D') {
            if (yXanh == h - yXanh)
                cout << "DRAW\n";
            else if (yXanh > h - yXanh)
                cout << "BLUE\n";
            else
                cout << "RED\n";
        } else if (c == 'L') {
            int xDo = xXanh - 1;
            if (w - xDo == xDo)
                cout << "DRAW\n";
            else if (w - xDo > xDo)
                cout << "BLUE\n";
            else
                cout << "RED\n";
        } else if (c == 'R') {
            if (xXanh == w - xXanh)
                cout << "DRAW\n";
            else if (xXanh > w - xXanh)
                cout << "BLUE\n";
            else
                cout << "RED\n";
        }
    }
}