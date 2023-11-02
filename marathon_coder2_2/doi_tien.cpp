// #include <iostream>
// #include <vector>
// #include <climits>

// int main() {
//     int n, S;
//     cin >> n >> S;

//     // Tạo mảng dp để lưu số lượng đồng tiền tối thiểu để có tổng i
//     vector<int> dp(S + 1, INT_MAX);
//     dp[0] = 0;

//     for (int i = 1; i <= S; ++i) {
//         for (int coin = 1; coin <= n; ++coin) {
//             if (coin <= i && dp[i - coin] + 1 < dp[i]) {
//                 dp[i] = dp[i - coin] + 1;
//             }
//         }
//     }

//     if (dp[S] == INT_MAX) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         cout << dp[S] << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    long long n, S;
    cin >> n >> S;
    if(n<=0||S<=0) {
        cout << "IMPOSSIBLE"; return 0;
    }
    long long maxCoins = S / n; // Số lượng đồng xu với giá trị lớn nhất (n) cần thiết
    long long remainingSum = S % n; // Phần tổng còn lại sau khi dùng đồng xu lớn nhất

    long long totalCoins = maxCoins;
    if (remainingSum > 0) {
        totalCoins += 1; // Sử dụng một đồng xu với giá trị remainingSum để hoàn thành tổng S
    }

    cout << totalCoins << endl;

    return 0;
}
