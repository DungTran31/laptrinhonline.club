#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minInsertions(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (s[i] == s[j] && cl == 2) {
                dp[i][j] = 0;
            } else if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    string s;
    cin >> s;

    int minInserts = minInsertions(s);
    cout << minInserts << endl;

    return 0;
}
