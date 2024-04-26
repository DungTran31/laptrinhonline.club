#include <bits/stdc++.h>    
#include <iostream>
using namespace std;

int main() {
    double x; cin >> x;
    cout << fixed << setprecision(2);
    if(x <= 400) {
        cout << "Luong: " << x + x * 15/100 << endl;
        cout << "Tien kiem duoc: " << x * 15/100 << endl;
        cout << "Ty le phan tram: " << 15 << "%" << endl;
    } else if (x > 400 && x <= 800) {
        cout << "Luong: " << x + x * 12/100 << endl;
        cout << "Tien kiem duoc: " << x * 12/100 << endl;
        cout << "Ty le phan tram: " << 12 << "%" << endl;
    } else if (x > 800 && x <= 1200) {
        cout << "Luong: " << x + x * 10/100 << endl;
        cout << "Tien kiem duoc: " << x * 10/100 << endl;
        cout << "Ty le phan tram: " << 10 << "%" << endl;
    } else if (x > 1200 && x <= 2000) {
        cout << "Luong: " << x + x * 7/100 << endl;
        cout << "Tien kiem duoc: " << x * 7/100 << endl;
        cout << "Ty le phan tram: " << 7 << "%" << endl;
    } else {
        cout << "Luong: " << x + x * 4/100 << endl;
        cout << "Tien kiem duoc: " << x * 4/100 << endl;
        cout << "Ty le phan tram: " << 4 << "%" << endl;
    }
}