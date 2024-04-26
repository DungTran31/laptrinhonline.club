#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; 

        int total_bottles = n / m; // Số chai mua được với số tiền n
        int caps = total_bottles; // Số nắp chai ban đầu

        int extra_bottles = 0;
        while (caps >= k) {
            int new_bottles = caps / k; // Số chai mới đổi được từ nắp chai
            extra_bottles += new_bottles; // Cộng số chai mới vào tổng số chai thêm được
            caps = new_bottles + caps % k; // Cập nhật số nắp chai còn lại
        }

        total_bottles += extra_bottles; // Cộng thêm số chai thêm được sau quá trình đổi nắp

        cout << total_bottles << endl; 
    }

    return 0;
}
