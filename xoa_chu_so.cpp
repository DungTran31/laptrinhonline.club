#include <iostream>
#include <vector>
#include <string>

using namespace std;

main() {
    vector<long long> numbers;
    long long num;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    for (long long i = 1; i < numbers.size(); i++) {
        if (numbers[i] >= numbers[i - 1]) {
            while (numbers[i] >= numbers[i-1]) {
                string s = to_string(numbers[i]);
                long long maxDigit = -1;
                long long index = 0;

                // Tìm chữ số lớn nhất trong số
                for (long long j = 0; j < s.length(); j++) {
                    long long currentDigit = s[j] - '0'; // Chuyển đổi từ ký tự sang số
                    if (currentDigit > maxDigit) {
                        maxDigit = currentDigit;
                        index = j;
                    }
                }

                // Thay chữ số lớn nhất thành số 0
                s[index] = '0';

                // Cập nhật số đã biến đổi vào vector
                numbers[i] = stoll(s);
                if(numbers[i] <= numbers[i-1]) break;
            }
        }
    }

    long long sum = 0;
    for (long long i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    cout << sum << endl;

    return 0;
}
