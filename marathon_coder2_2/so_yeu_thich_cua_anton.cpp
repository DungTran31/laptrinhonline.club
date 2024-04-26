#include <bits/stdc++.h>
using namespace std;
int main() {
    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    // Tính số lượng 32 và 256 có thể tạo ra
    long long count_256 = min(k2, min(k5,k6));
    long long count_32 = min(k2 - count_256, k3);

    // Tính tổng tối đa
    long long sum = count_32 * 32 + count_256 * 256;

    cout << sum << endl;
    return 0;
}
