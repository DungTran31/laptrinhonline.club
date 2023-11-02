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
    int t0;
    cin >> t0;

    string initial_state;
    cin >> initial_state;

    int n = initial_state.length();
    string final_state = initial_state;

    for (int t = 0; t < t0; t++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (initial_state[i] == '1') {
                sum++;
            }
        }

        for (int i = 0; i < n; i++) {
            if ((sum + (initial_state[i] - '0')) % 2 == 0) {
                final_state[i] = '0';
            } else {
                final_state[i] = '1';
            }
        }

        initial_state = final_state;
    }

    cout << final_state << endl;

    return 0;
}
