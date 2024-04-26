#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int a[9];
    for(int i=0;i<9;i++)std::cin>>a[i];
    
    for(int k=1;k<=9;k++){ //1, 2, 3, 4. 5, 6, 7, 8, 9
        bool find = false;
        for(int i=0;i<9;i++){
            if(a[i]==k){
                find=true;
            }
        }
        if(!find){
            std::cout<<"INVALID";
            return 0;
        }
    }
    std::cout<<"VALID";
}