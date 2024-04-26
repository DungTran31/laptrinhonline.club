#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    std::cin >> n;


    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            std::cout << i << "\n";
        }
    }


    return 0;
}