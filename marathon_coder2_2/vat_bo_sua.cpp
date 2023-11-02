#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sắp xếp mảng a theo thứ tự giảm dần
    sort(a.begin(), a.end(), greater<int>());

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += max(0, a[i] - i);
    }

    cout << sum << endl;
    
    return 0;
}
