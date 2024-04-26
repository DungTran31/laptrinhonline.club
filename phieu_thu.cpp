#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    if(x==1) cout << "Tong: R$ " << fixed << setprecision(2) << 1.0 * y * 4;   
    if(x==2) cout << "Tong: R$ " << fixed << setprecision(2) << 1.0 * y * 4.5;   
    if(x==3) cout << "Tong: R$ " << fixed << setprecision(2) << 1.0 * y * 5;   
    if(x==4) cout << "Tong: R$ " << fixed << setprecision(2) << 1.0 * y * 2;   
    if(x==5) cout << "Tong: R$ " << fixed << setprecision(2) << 1.0 * y * 1.5;   
    return 0;
}