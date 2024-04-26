#include <bits/stdc++.h>
#define int long
#define long long long
const int mod = 1000000007;
const int limit = 100001;

int a[1000000];
main(){
    int n = 0;
    int x;
    while(std::cin>>x){
        a[n++]=x;
    }
    int a1=0;
    int index_a1=0;
    int d = 0;
    for(int i=0;i<n;i++){
        if(a1==0){
            if(a[i]!=0){
                a1=a[i];
                index_a1=i;
            }
        }else{
            if(a[i]!=0){
                d = (a[i]-a1)/(i-index_a1);
                // break;
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<a1+d*(i-index_a1)<<" ";
    }
}