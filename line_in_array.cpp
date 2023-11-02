#include <bits/stdc++.h>
using namespace std; 

int main() { 
    char s; 
    double a[100][100],tong=0; 
    long long n; 
    cin>>n; cin>>s; 
    for(int i=0;i<12;i++) { 
        for(int j=0;j<12;j++) { 
            cin>>a[i][j]; 
        } 
    } 
    for(int j=0;j<12;j++) { 
        tong+=a[n][j]; 
    } 
    if(s=='S') { 
        cout<<setprecision(1)<<fixed<<tong; 
    } if(s=='M') { 
        cout<<setprecision(1)<<fixed<<(double)tong/12; 
    } 
}
