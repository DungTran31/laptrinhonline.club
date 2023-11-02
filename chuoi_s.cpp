#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double s = 0;
    int i = 1;
    while (i<=100){
        s += 1.0/i;
        i++;
    }
    cout << setprecision(6) << fixed;
    cout << s << endl;
}
