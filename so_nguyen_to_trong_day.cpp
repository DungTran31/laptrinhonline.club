#include <iostream>
#include <algorithm>
#include <math.h>   
using namespace std;
typedef long long ll;

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return n>1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(prime(a[i])) {
            cout << a[i] << " ";
        }
    }

    return 0;    
}