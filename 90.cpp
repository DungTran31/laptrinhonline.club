#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isDivisibleBy90(string num) {
    int sum = 0;
    int count[10] = {0};
    for (char c : num) {
        int digit = c - '0';
        sum += digit;
        count[digit]++;
    }

    if (sum % 9 != 0) return false; 
    string result;
    if (count[0] == 0) return false; 
    for (int i = 9; i >= 0; i--) {
        result += string(count[i], '0' + i);
    }
    cout << result << endl;
    return true;
}

int main() {
    string num;
    cin >> num;

    sort(num.begin(), num.end(), greater<char>());

    if (!isDivisibleBy90(num)) {
        cout << -1 << endl; 
    }

    return 0;
}
