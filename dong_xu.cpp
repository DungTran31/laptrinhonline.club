#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n; cin >> n;
        while (true) {
            if (n % 2 == 0) {
                ll k = 0;
                ll temp = n;
                // vòng lặp để tìm k là số mũ lớn nhất n chia hết cho 2^k
                // đồng thời chia luôn sau đó
                while (temp % 2 == 0) {
                    temp /= 2;
                    k++;
                }
                n = temp + k;
            } else {
                n /= 2;
            }
            if (n < 10) {
                break;
            }
        }

        if (n % 2 == 0) {
            cout << "y" << endl;
        } else {
            cout << "n" << endl;
        }
    }

    return 0;
}
