#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        merged.push_back(a[i]);
        i++;
    }

    while (j < m) {
        merged.push_back(b[j]);
        j++;
    }

    for (int k = 0; k < merged.size(); k++) {
        cout << merged[k] << " ";
    }

    return 0;
}
