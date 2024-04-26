#include <iostream>
using namespace std;
#define int long

int mod = 0;

int mul_mod(int a,int b){
    if(b==0)return 0;
    return  mul_mod(a,b/2)*2 %mod + (b%2==0?0:a) %mod;
}
int pow_mod(int a,int b){
    if(b==0)return 1;
    int temp = pow_mod(a,b/2);
    return mul_mod(mul_mod(temp,temp) %mod , (b%2==0?1:a)) %mod;
}

main(){
    int t;cin>>t;
    while(t-->0){
        string x;int b;
        cin >> x >> b >> mod;
        int a=0;
        for(char c:x)a=(a*10+(c-'0'))%mod;
        cout << pow_mod(a, b) << endl;
    }
}