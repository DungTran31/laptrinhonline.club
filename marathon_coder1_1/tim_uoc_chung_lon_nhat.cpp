#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define int long
#define long long long

const int mod = 1000000007;
const int limit = 100000;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int giaithua(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * giaithua(n - 1); 
    }
}

main(){
    int a, b;
    cin >> a >> b;

    cout << gcd(giaithua(a),giaithua(b));
}