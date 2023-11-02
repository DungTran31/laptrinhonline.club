#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while (!s.empty() && a[i] > a[s.top()]) {
            int index = s.top();
            s.pop();
            if (!s.empty()) {
                b[index] = a[s.top()];
            } else {
                b[index] = -1;
            }
        }
        s.push(i);
    }

    while (!s.empty()) {
        int index = s.top();
        s.pop();
        b[index] = -1;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }
    return 0;
}
