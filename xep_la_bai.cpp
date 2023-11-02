#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int u1 = 2; // Số lá bài ở tầng đầu tiên
    int d = 3;  // Công sai giữa các tầng
    int res = u1; // Tổng số lá bài

    for (int i = 2; i <= n; ++i) {
        int ui = u1 + (i - 1) * d; // Số lá bài ở tầng thứ i
        res += ui; // Cộng dồn số lá bài
    }

    std::cout << res << std::endl;

    return 0;
}
