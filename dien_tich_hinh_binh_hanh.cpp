#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << setprecision(3) << fixed;
    double a, b, s;
    double alpha;
    cin >> a >> b >> alpha;
    double radian = alpha * M_PI / 180.0;
    cout << a * b * sin(radian);
}