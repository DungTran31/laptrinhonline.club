#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, q, r; cin >> a >> b;
    for(int i=0;i<abs(b);i++){ 
        if((a-i)%b==0) r=i; 
    }
    q=(a-r)/(float)b; 
    cout<< q << " " << r; 
}
