#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        long a, b, c; cin >> a >> b >> c;
        if(a<b){
            cout << "TIEN ";
        }else if(a==b){
            cout << "DUNG ";
        }else {
            cout << "LUI ";
        }
        a=b;
        if(a<c){
            cout << "TIEN\n";
        }else if(a==c){
            cout << "DUNG\n";
        }else {
            cout << "LUI\n";
        }
    }
    
    
}