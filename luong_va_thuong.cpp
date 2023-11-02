#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std; 

int main() {
    string ten;
    double a,b;
    getline (cin,ten);
    cin >> a >> b;
    double c = a + b * (15.0/100);
    cout << setprecision(2) << fixed << "TONG = R$ " << c;
}