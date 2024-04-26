#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

bool isTriangle(double a, double b, double c){
    return (a + b > c) && (a + c > b) && (b + c > a);
}
int main(){
    cout << setprecision(1) << fixed;
    double a, b, c; cin >> a >> b >> c;
    if(isTriangle(a,b,c)){
        cout << "Chu vi = " << a + b + c << endl;
    }else{
        cout << "Dien tich = " << (a+b)*c/2 << endl;
    }
}

/*
#include <iostream>
using namespace std;
int main(){
    double x, y; cin >> x >> y;
    if(x == 0 && y == 0) cout << "Origem";
    else if(x == 0 && y != 0) cout << "Eixo Y";
    else if(x != 0 && y == 0) cout << "Eixo X";
    else if(x > 0 && y > 0) cout << "Q1";
    else if(x < 0 && y > 0) cout << "Q2";
    else if(x < 0 && y < 0) cout << "Q3";
    else if(x > 0 && y < 0) cout << "Q4";
}
*/