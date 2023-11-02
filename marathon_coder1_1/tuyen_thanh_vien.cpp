#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

// Hàm để định dạng lại tên
string formatName(string name) {
    stringstream formattedName;
    bool capitalizeNext = true;

    for (char c : name) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            formattedName << static_cast<char>(toupper(c));
            capitalizeNext = false;
        } else {
            formattedName << static_cast<char>(tolower(c));
        }
    }

    return formattedName.str();
}

int main() {
    string input;
    getline(cin, input);

    // Sử dụng stringstream để tách các từ và định dạng lại tên
    stringstream ss(input);
    string token;
    bool firstWord = true;

    while (ss >> token) {
        if (!firstWord) {
            cout << " ";
        }
        cout << formatName(token);
        firstWord = false;
    }

    cout << endl;

    return 0;
}
