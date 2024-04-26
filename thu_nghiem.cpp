#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    cout << setprecision(2) << fixed;
    int n; cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    while (n--)
    {
        int x;
        char c;
        cin >> x >> c;
        if(c == 'C'){
            sum1 += x;
        } else if(c == 'R') {
            sum2 += x;
        } else if(c == 'S') {
            sum3 += x;
        }
    }
    int sum = sum1 + sum2 + sum3;
    cout << "Tong so: " << sum << endl;
    cout << "Tong so tho: " << sum1 << endl;
    cout << "Tong so chuot: " << sum2 << endl;
    cout << "Tong so ech: " << sum3 << endl;
    cout << "Ty le phan tram cua tho: " << 1.0 * sum1 / sum * 100 <<"%"<< endl;
    cout << "Ty le phan tram cua chuot: " << 1.0 * sum2 / sum * 100 <<"%"<< endl;
    cout << "Ty le phan tram cua ech: " << 1.0 * sum3 / sum * 100 <<"%";
}