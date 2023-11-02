#include <iostream>
#include <algorithm>
#include <math.h>   
using namespace std;
typedef long long ll;

// Nhập 2 số nguyên dương a, b
// Xác định 2 số có phải là 2 số nguyên tố cùng nhau ko
// Là 2 số có cùng ước chung lớn nhất là 1

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

int main(){
    ll a, b; 
    cin >> a >> b;
    cout << gcd(a,b);
}