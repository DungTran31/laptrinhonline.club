#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    // Kiểm tra xem đoạn thẳng AB có cắt cả trục hoành và trục tung không
    if ((x1 * x2 < 0) && (y1 * y2 < 0)) {
        cout << "YES" << endl;
    } else if (x1 == 0 && x2 == 0 && (y1 * y2 < 0)) {
        // đoạn thẳng nằm trên trục hoành và cắt trục tung
        cout << "NO" << endl;
    } else if (y1 == 0 && y2 == 0 && (x1 * x2 < 0)) {
        // đoạn thẳng nằm trên trục tung và cắt trục hoành
        cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
