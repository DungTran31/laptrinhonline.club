#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,a;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        a=n%10;
        if(a==0){
            n/=10;
        }else{
            n=n-1;
        }
    }
    cout << n;
}