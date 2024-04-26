#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double ma1, ma2, dv1, dv2, gia1, gia2;
    cin >> ma1 >> dv1 >> gia1 >> ma2 >> dv2 >> gia2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << (dv1 * gia1) + (dv2 * gia2);
}