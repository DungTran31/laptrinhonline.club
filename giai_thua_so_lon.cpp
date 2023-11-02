#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(1, 1); // Khởi tạo vector chứa sẵn phần tử 1
    for (int i = 2; i <= n; i++) {
        long long nho = 0;
        for (int j = 0; j < a.size(); j++) { 
            nho += a[j] * i;
            a[j] = nho % 10;
            nho /= 10;
        }
        while (nho) {
            a.push_back(nho % 10);
            nho /= 10;
        }
    }
    reverse(a.begin(), a.end());
    for (int j = 0; j < a.size(); j++) {
        cout << a[j];
    }
    return 0;
}
