#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, u, v;
        cin >> x >> y >> u >> v;

        // Tính khoảng cách theo hàng ngang và cột dọc
        int hor = abs(x - u);
        int ver = abs(y - v);

        if (hor == 0 && ver == 0) {
            cout << 0 << endl;
        } else if (hor == ver || hor == 0 || ver == 0) {
            // Nếu hậu có thể di chuyển theo đường chéo hoặc theo hàng ngang/cột dọc
            cout << 1 << endl;
        } else {
            // Trường hợp còn lại, hậu cần di chuyển ít nhất 2 lần để đi từ (x, y) đến (u, v)
            cout << 2 << endl;
        }
    }

    return 0;
}
