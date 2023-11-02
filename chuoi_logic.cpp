#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;

    int count = 0;

    for (int i = 1; i <= Y; ++i) {
        std::cout << i << " ";
        ++count;

        if (count == X) {
            std::cout << std::endl;
            count = 0;
        }
    }

    return 0;
}
