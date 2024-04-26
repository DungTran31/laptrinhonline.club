#include <bits/stdc++.h>
#include <iostream> 
using namespace std;

int main() {
    cout << setprecision(2) << fixed;
    double n; cin >> n;
    if(n <= 2000) cout << "Isento";
    else if(n >= 2000.01 && n <= 3000) 
        cout << "R$ " << (n-2000)*8/100;
    else if(n >= 3000.01 && n <= 4500)
        cout << "R$ " << 1000*8/100+(n-3000)*18/100;
    else cout << "R$ " << 1000*8/100+1500*18/100+(n-4500)*28/100;
}