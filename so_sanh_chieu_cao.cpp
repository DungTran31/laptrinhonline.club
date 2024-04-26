#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    string p1, p2;
    int a1, a2;
    cin >> p1 >> a1;
    cin >> p2 >> a2;
    if(a1 > a2){
        cout << p1 << " cao hon " << p2;
    }else if(a1 == a2){
        cout << p1 << " cao bang " << p2;
    }else {
        cout << p2 << " cao hon " << p1;
    }
}