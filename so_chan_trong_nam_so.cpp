#include <iostream>

int main() {

    int evenCount = 0;

    for (int i = 0; i < 5; i++) {
        int value;
        
        std::cin >> value;

        if (value % 2 == 0) {
            evenCount++;
        }
    }

    std::cout << evenCount << " Gia tri"<< std::endl;

    return 0;
}