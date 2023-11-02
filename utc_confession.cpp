#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mOrigin = m;
    int k; cin >> k;
    while (k--){
        int x; cin >> x;
        int s = 0;
        for (int i = 0; i < x; i++)
        {
            s += a[i];
        }
        m = mOrigin + s;
        cout << m << endl;
    }
    
    return 0;
}