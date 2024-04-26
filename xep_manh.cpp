#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, temp, ans = 0;
    cin >> a >> b;

    if (b < a) swap(b,a);

    if (a >= 4 && b >= 4) {
        do {
            a -= 4;
            b -= 4;
            ans += 2;
        } while (a >= 4 && b >= 4);

        if (b < a) swap(b,a);
        

        if (a >= 4 && b >= 4) {
            do {
                a -= 4;
                b -= 4;
                ans += 2;
            } while (a >= 4 && b >= 4);
        } else if (a >= 1 && b >= 3) {
            ans++;
            a -= 1;
            b -= 3;
        }
    } else if (a >= 1 && b >= 3) {
        ans++;
        a -= 1;
        b -= 3;
    }

    if (b < a) swap(b,a);

    if (b == 3 && a >= 1) ans++;
    
    cout << ans;

    return 0;
}
