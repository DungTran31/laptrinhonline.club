#include<bits/stdc++.h>
using namespace std;

int main(){ 
    float *a; 
    long int d=0; 
    a=new float[6]; 
    for(int i=0;i<6;i++){ 
        cin >> a[i]; 
    } 
    for(int i=0;i<6;i++){ 
        if(a[i]>0) d++; 
    } 
    cout << d << " so duong"; 
    
}