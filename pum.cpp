#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        cout << i*i << " ";
        cout << i*i*i << "\n";
        cout << i << " ";
        cout << i*i+1 << " ";
        cout << i*i*i+1 << "\n";
    }
}