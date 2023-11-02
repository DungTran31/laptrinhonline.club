#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m;
    cin >> m;
    
    vector<vector<int>> matrix(m, vector<int>(3));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    vector<vector<int>> dp(m, vector<int>(3, 0));
    
    for (int j = 0; j < 3; j++) {
        dp[0][j] = matrix[0][j];
    }
    
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            int max_prev = 0;
            for (int k = 0; k < 3; k++) {
                if (k != j) {
                    max_prev = max(max_prev, dp[i - 1][k]);
                }
            }
            dp[i][j] = matrix[i][j] + max_prev;
        }
    }
    
    int max_sum = max(dp[m - 1][0], max(dp[m - 1][1], dp[m - 1][2]));
    
    cout << max_sum << endl;
    
    return 0;
}
