#include <bits/stdc++.h>
#define int long
#define long long long
const int mod = 1000000007;
const int limit = 100001;
using namespace std;

main(){
    int t;cin>>t;
    while(t--) {
        int xa,ya,xb,yb,xc,yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        char z;cin>>z;
        if(z=='x'){
            swap(xa,ya);
            swap(xb,yb);
            swap(xc,yc);
        }
        int y;cin>>y;
        if((y<ya && y<yb && y<yc) || (y>ya && y>yb && y>yc)){
            cout<<0;
        }else if(y==ya){
            cout<<"A";
        }else if(y==yb){
            cout<<"B";
        }else if(y==yc){
            cout<<"C";
        }else if((y<yb && y<yc) || (y>yb && y>yc)){
            cout<<"A";
        }else if((y<ya && y<yc) || (y>ya && y>yc)){
            cout<<"B";
        }else if((y<yb && y<ya) || (y>yb && y>ya)){
            cout<<"C";
        }
        cout<<endl;
    }
    
}