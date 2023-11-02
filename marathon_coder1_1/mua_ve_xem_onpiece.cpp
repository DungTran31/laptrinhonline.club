#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int change = 0;  // Số tiền thừa cần trả lại người mua vé
    int balance_25 = 0;  // Số tiền 25 xu có trong quầy
    int balance_50 = 0;  // Số tiền 50 xu có trong quầy

    bool possible = true;

    for (int i = 0; i < n; i++) {
        int payment;
        cin >> payment;

        if (payment == 25) {
            balance_25++;
        } else if (payment == 50) {
            if (balance_25 > 0) {
                balance_25--;
                balance_50++;
            } else {
                possible = false;
                break;
            }
        } else if (payment == 100) {
            if (balance_50 > 0 && balance_25 > 0) {
                balance_50--;
                balance_25--;
            } else if (balance_25 >= 3) {
                balance_25 -= 3;
            } else {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
