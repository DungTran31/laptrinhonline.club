#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

int main() {
    int n;
    ll a, b;
    cin >> n >> a;
    n--;
    while (n--) {
        cin >> b;
        a = lcm(a, b);
    }
    cout << a;

    return 0;
}
