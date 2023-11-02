#include <iostream>
typedef long long ll;

// Hàm tính hàm ngược của n!
ll reverseFactorial(ll n) {
    ll count = 0;
    ll divisor = 2;

    while (n > 1) {
        if (n % divisor == 0) {
            n /= divisor;
            count++;
        } else {
            break;
        }
        divisor++;
    }

    if (n == 1) {
        return count+1;
    } else {
        return -1; // Trả về -1 nếu không tìm thấy hàm ngược của n!
    }
}

int main() {
    ll n;
    std::cin >> n;

    std::cout << reverseFactorial(n);

    

    return 0;
}
