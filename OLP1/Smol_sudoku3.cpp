#include <iostream>

int main() {
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> a[i][j];
        }
    }

  
    bool appeared[10] = {false};


    bool isValid = true;

  
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a[i][j] < 1 || a[i][j] > 9 || appeared[a[i][j]]) {
                isValid = false;
                break;
            }
            appeared[a[i][j]] = true;
        }
        if (!isValid) {
            break;
        }
    }

   
    if (isValid) {
        std::cout << "VALID\n";
    } else {
        std::cout << "INVALID\n";
    }

    return 0;
}