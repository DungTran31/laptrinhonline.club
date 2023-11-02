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
    string s;
    cin >> s;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int a, b;
        char c;
        cin >> a >> b >> c;

        if (a < 1 || b > s.length() || a > b) {
            cout << "0 ";
            continue;
        }

        int count = 0;
        for (int j = a - 1; j < b; j++) {
            if (s[j] == c) {
                count++;
            }
        }

        cout << count << " ";
    }

    return 0;
}
