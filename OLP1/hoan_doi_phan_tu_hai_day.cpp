#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < n; i++){
        if(a[i] < b[i]) swap(a[i], b[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sumA += a[i];
        sumB += b[i];
    }

    cout << abs(sumA-sumB) << endl;

    return 0;
}
