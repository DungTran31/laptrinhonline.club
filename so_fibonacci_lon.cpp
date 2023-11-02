// Ý tưởng: f[1] = 1, f[2] = 1, f[n] = f[n-1] + f[n-2]. Ta dùng vector để lưu số thay vì dùng biến vì số lượng lưu sẽ nhiều hơn.
// Lưu f[n-2] bằng vector a, f[n-1] bằng vector b, f[n] bằng vector c.
#include<bits/stdc++.h>
using namespace std;

// Hàm cong thực hiện phép cộng hai số nguyên lớn trong hệ cơ số 10
vector<int> cong(vector<int> a, vector<int> b) {
    vector<int> c = a; // Sao chép vector a vào vector c
    if (a.size() < b.size()) c.resize(b.size(), 0); // Đảm bảo vector c có độ dài tương đương vector b
    for (int i = 0; i < b.size(); i++)
        c[i] += b[i]; // Thực hiện phép cộng từng chữ số tương ứng của a và b

    int nho = 0; // Biến nho để lưu số dư sau khi cộng
    for (auto &x : c) {
        nho += x; // Cộng thêm số nho vào x
        x = nho % 10; // Lấy phần dư của nho cho 10 và lưu vào x
        nho /= 10; // Cập nhật nho bằng phần nguyên của nho cho 10
    }
    
    if (nho) c.push_back(nho); // Nếu còn số dư sau khi cộng xong, thêm số dư vào cuối vector

    return c; // Trả về vector kết quả sau khi cộng
}

int main() {
    int n;
    cin >> n;
    if (n == 0 || n == 1) {
        cout << n;
        return 0;
    }

    vector<int> a(1, 0), b(1, 1), c; // Khởi tạo vector a với giá trị 0, vector b với giá trị 1
    for (int i = 2; i <= n; i++) {
        c = cong(a, b); // Tính tổng a và b, lưu kết quả vào c
        a = b; // Gán vector b cho vector a
        b = c; // Gán vector c cho vector b
    }

    for (auto it = b.rbegin(); it != b.rend(); it++) // In ra các chữ số của vector b theo chiều ngược
        cout << *it;

    return 0;
}

/*
n = int(input())
dp = [0]*(n + 1)
dp[1] = dp[2] = 1
for i in range(3,n+1):
    dp[i] = dp[i - 1] + dp[i - 2]
print(dp[n])

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<long long> dp(n + 1, 0);
    dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    std::cout << dp[n] << std::endl;
    
    return 0;
}

*/
