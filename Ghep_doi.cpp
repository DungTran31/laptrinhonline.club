#include <iostream>
using namespace std;

int main(){
    int x, y; cin >> x >> y;   
    int S,P;
    if(x>=y){
        S=y;
        P=(x-y)/2;
    }
    else if(x<=y){
        S=x;
        P=(y-x)/2;
    }
    cout << S << " " << P;
    return 0;

}