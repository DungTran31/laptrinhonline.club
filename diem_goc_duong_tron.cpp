#include <iostream>
#include <vector>
#include <cmath>

struct Point {
    int x, y;
};
int main() {
    int r, n;
    std::cin >> r;
    std::cin >> n; 

    std::vector<Point> a(n);

    // Nhập tọa độ của các điểm
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].x >> a[i].y;
    }

    Point res = {0, 0};
    double max = -1.0;

    for (int i = 0; i < n; i++) {
        double temp = std::sqrt(a[i].x * a[i].x + a[i].y * a[i].y);

        if (temp <= r && temp > max) {
            max = temp;
            res = a[i];
        }
    }

    if (max < 0) {
        std::cout << "0\n";
    } else {
        std::cout << res.x << " " << res.y << std::endl;
    }

    return 0;
}
