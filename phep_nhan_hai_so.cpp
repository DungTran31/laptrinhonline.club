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
    int t;
    cin >> t;

    while (t--) {
        string str, str2;
        cin >> str >> str2;

        for (int i = 1; i < str.length(); i++) {
            string part1 = str.substr(0, i);
            string part2 = str.substr(i);

            int a = stoi(part1);
            int b = stoi(part2);

            if (a * b == stoi(str2)) {
                cout << a << " " << b << endl;
                break;
            }
        }
    }

    return 0;
}
