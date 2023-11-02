#include<iostream>
using namespace std;

int main(){
    int s, m, a, b;
    do
    {
       cin >> s >> m;
    } while (-1000000>=s>=1000000 && -1000000>=m>=1000000);
    
    if((s+m)%2 !=0 || (s-m)%2 !=0 ){
        cout << -1;
    }else{
        a = (s+m)/2;
        b = (s-m)/2;
        cout << a << " " << b;
    }


}