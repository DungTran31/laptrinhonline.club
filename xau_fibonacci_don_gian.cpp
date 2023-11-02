#include <bits/stdc++.h>

using namespace std;

long long  a[100];

main() {
    int t;
        cin>>t;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<93;i++){
        a[i]=a[i-1]+a[i-2];
    }
    while(t--){
        long long n,k;
        cin>>n>>k;
        while(n>2){
            if(k>a[n-2]){
                k-=a[n-2];n-=1;
            }
            else n-=2;
        }
        if(n==1)
            cout<<"A"<<endl;
        if(n==2)
            cout<<"B"<<endl;
    }

}