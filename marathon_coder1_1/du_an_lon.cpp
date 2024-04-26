#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    // Số lượng trưởng nhóm có thể là một số divisor của n.
    // Vì vậy, chúng ta có thể tìm tất cả các divisor của n và đếm số lượng divisors.

    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i * i != n) {
                count++;
            }
        }
    }

    cout << count - 1<< endl;

    return 0;
}
