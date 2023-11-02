#include <iostream>

int main() {
    int S, n, T;
    std::cin >> S >> n >> T;

    int a, b; 

    for (a = 1; a * a <= S; a++) {
        if (S % a == 0) {
            b = S / a; 
            int new_area = (a + n) * (b + n);
            if (new_area - S == T) {
                break;
            }
        }
    }

    if (a >= b) {
        std::cout << a << " " << b << std::endl;
    } else {
        std::cout << b << " " << a << std::endl;
    }

    return 0;
}
