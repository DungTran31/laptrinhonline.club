#include <iostream>

void thapHanoi(int n, char a, char c, char b, int &step) {
    // nếu chỉ có 1 đĩa thì chuyển từ nguồn -> đích
    if (n == 1) {
        std::cout << "Buoc" << ++step << " Chuyen dia 1 tu " << a << " sang " << b << std::endl;
        return;
    }
    // nếu ko thì chuyển n-1 đĩa từ nguồn -> trung gian với việc lấy đích làm trung gian tạm thời rồi chuyển dần
    thapHanoi(n - 1, a, b, c, step);
    // chuyển xong thì chuyển từ nguồn -> đích
    std::cout << "Buoc" << ++step << " Chuyen dia " << n << " tu " << a << " sang " << b << std::endl;
    // chuyển n-1 đĩa từ trung gian -> đích với việc lấy nguồn ban đầu làm trung gian tạm thời
    thapHanoi(n - 1, c, a, b, step);
}

int main() {
    int n;
    std::cin >> n;

    int step = 0;
    thapHanoi(n, 'A', 'C', 'B', step);

    return 0;
}
