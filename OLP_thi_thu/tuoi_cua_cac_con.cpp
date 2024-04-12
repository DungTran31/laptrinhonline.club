#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if(a<b){
        int c = b - a;
        cout << b + c;
    }else{
        cout << b;
    }
}