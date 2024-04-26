#include <iostream>
#include <math.h>
#include <iomanip> // Để định dạng hiển thị số thập phân

using namespace std;

// Hàm tính diện tích của tứ giác
double calculateArea(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double area = 0.5 * abs(x1*y2 + x2*y3 + x3*y4 + x4*y1 - x2*y1 - x3*y2 - x4*y3 - x1*y4);
    return area;
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    // Tính diện tích tứ giác
    double area = calculateArea(x1, y1, x2, y2, x3, y3, x4, y4);

    cout << fixed << setprecision(3) << area << endl;

    return 0;
}
