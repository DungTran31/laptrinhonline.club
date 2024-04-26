#include <iostream>

void reverseString(char *str, int length) {
    char *start = str;
    char *end = str + length - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Consume the newline character

    char *inputString = new char[n + 1]; // +1 for the null terminator
    
    for (int i = 0; i < n; i++) {
        std::cin.get(inputString[i]);
    }
    
    inputString[n] = '\0'; // Add null terminator
    
    reverseString(inputString, n);

    std::cout << inputString << std::endl;

    delete[] inputString;

    return 0;
}
