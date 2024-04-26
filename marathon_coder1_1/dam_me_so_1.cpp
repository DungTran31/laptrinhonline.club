#include <iostream>
using namespace std;

int find_purchase_amount(int n) {
    int x = 1;
    int result = 0;
    while (n > 0) {
        if (n >= x) {
            n -= x;
            result += x;
        } else {
            result += n;
            n = 0;
        }
        x = x * 10 + 1;
    }

    if (n == 0) {
        return result;
    } else {
        return -1;  // Trả về -1 thay vì "YES" để biểu thị không mua được hết n(xu)
    }
}

int main() {
    int n;
    cin >> n;

    int result = find_purchase_amount(n);
    if (result == -1) {
        cout << "YES" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
