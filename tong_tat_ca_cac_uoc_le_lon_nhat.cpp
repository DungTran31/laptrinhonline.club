#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b) {
    long long sum = 0;
    if (a % 2 != 0) a++; // Chuyển a thành số chẵn
    for (long long num = a; num <= b; num += 2) {
        long long temp = num >> 1; // Sử dụng phép dịch bit thay cho chia cho 2
        while (temp % 2 == 0) {
            temp >>= 1; // Dịch bit phải để tìm số lẻ
        }
        sum += temp;
    }
    return sum;
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long res = solve(a, b);
        long long a2 = a;
        if (a2 % 2 == 0) {
            a2++;
        }

        long long sum = ((b + 1) >> 1) * ((b + 1) >> 1) - ((a2 - 1) >> 1) * ((a2 - 1) >> 1);
        cout << res + sum << endl;
    }

    return 0;
}
