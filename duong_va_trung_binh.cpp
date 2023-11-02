#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    double a[6], sum = 0;
    int cnt = 0;
    cout << setprecision(1) << fixed;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        if(a[i] > 0){
            cnt++;
            sum += a[i];
        }  
    }
    cout << cnt << " Gia tri duong\n";
    if(cnt <= 0) {
        cout << 0.0 << endl;
    }else cout << 1.0 * sum / cnt << endl;
}