#include <iostream>

int main() {
    int distance;
    std::cin >> distance;

    int time = (distance * 60) / 30;

    std::cout << time << " Phut" << std::endl;

    return 0;
}