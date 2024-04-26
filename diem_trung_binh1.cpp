#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    double n1, n2, n3, n4, n5; 
    cin >> n1 >> n2 >> n3 >> n4;
    cout << fixed << setprecision(1);
    double dtb1 = (n1*2+n2*3+n3*4+n4)/10;
    double ans1 = ceil(dtb1 * 10) / 10;
    cout << "Media: " <<  ans1 << endl;
    if(ans1 >= 7){
        cout << "Aluno aprovado.";
    } else if (ans1 >= 5){ 
        cout << "Aluno em exame.\n";
        cin >> n5;
        cout << "Nota do exame: " <<  n5 << endl;
        double dtb2 = (ans1 + n5) / 2;
        double ans2 = ceil(dtb2 * 10) / 10;
        if(ans2 >= 5) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << ans2 << endl;
    } else {
        cout << "Aluno reprovado.";
    }
}