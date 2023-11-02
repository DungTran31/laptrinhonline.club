#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    /*
    int a, x, res;
    cin >> a >> x;
    if (x > a) res = x - a;
    else if(x == a) res = 24;
    else res = 24 - a + x;
    cout << "Tran dau keo dai " << res << " gio" << endl;
    */
    int a, b, x, y, res1, res2;
    cin >> a >> b >> x >> y;
    int totalStartMin = a * 60 + b;
    int totalEndMin = x * 60 + y;
    int totalMin = totalEndMin - totalStartMin;         
    if (totalMin <= 0) totalMin += 24 * 60;
    res1 = totalMin / 60;
    res2 = totalMin % 60;
    cout << "O JOGO DUROU " << res1 << " HORA (S) E " << res2 << " MINUTO (S)";
    return 0;
}