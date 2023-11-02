#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int min = heights[0];
    int max = heights[0];

    for (int i = 1; i < n; i++) {
        if (heights[i] < min) {
            min = heights[i];
        }
        if (heights[i] > max) {
            max = heights[i];
        }
    }

    int total_flags = 2; // Mặc định đặt cờ cho cây cao nhất và cây thấp nhất

    // Đếm số cây có cùng chiều cao cao nhất và thấp nhất
    for (int i = 0; i < n; i++) {
        if (heights[i] == min || heights[i] == max) {
            total_flags++;
        }
    }

    cout << total_flags - 2 << endl;

    return 0;
}
