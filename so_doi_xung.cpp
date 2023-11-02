#include <iostream>

bool soDoixung(long long num) {
    long long origin = num;
    long long reversed = 0;

    while (num > 0) {
        long long digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return origin == reversed;
}

int main() {
    long long n;
    std::cin >> n;

    if (soDoixung(n)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
