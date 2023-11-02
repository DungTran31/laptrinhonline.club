#include <iostream>
#include <map>
using namespace std;
int romanToNum(string roman) {
    map<char, int> romanToNum = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int res = 0;

    for (int i = 0; i < roman.length(); i++) {
        if (i < roman.length() - 1 && romanToNum[roman[i]] < romanToNum[roman[i + 1]]) {
            res -= romanToNum[roman[i]];
        } else {
            res += romanToNum[roman[i]];
        }
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string roman;
        cin >> roman;
        int num = romanToNum(roman);
        cout << num << endl;
    }

    return 0;
}
