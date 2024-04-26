#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n, v, u;
    float d;
    std::cin >> n;
    std::cout << std::setprecision(1) << std::fixed;
    if (n < 0) {
        std::cout << "ERROR";
    } else {
        d = 0.5 * n;
        u = 0.5 * n;
        v = n / 50;
        
        if (d + v == (float)(u + v)) {
            std::cout << u + 5 * v;
        } else {
            std::cout << d + 5 * v;
        }
    }
    
    return 0;
}
