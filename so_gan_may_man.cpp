#include <iostream>
using namespace std;

bool isLucky(int n) {
    // Kiểm tra xem số n chỉ chứa các chữ số thuộc tập 6,8
    for (int i = 0; i < n; i++) {
        if (n % 10 != 6 && n % 10 != 8) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool isNearLucky(int n) {
    // Nếu số n là số may mắn thì chắc chắn là số gần may mắn
    if (isLucky(n)) {
        return true;
    }

    for (int i = 6; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    if (isNearLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
