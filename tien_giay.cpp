#include <iostream>

int main() {
    int menhgia[] = {100, 50, 20, 10, 5, 2, 1};
    int cntmenhgia = sizeof(menhgia) / sizeof(menhgia[0]);

    int n;
    std::cin >> n;

    std::cout << n << std::endl;

    for (int i = 0; i < cntmenhgia; ++i) {
        int dem = n / menhgia[i];
        n %= menhgia[i];

        std::cout << dem << " to R$ " << menhgia[i] << ",00" << std::endl;
    }

    return 0;
}
