#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int main() {
    int n;
    cin >> n;

    bool found = false;

    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n / i) && i * (n / i) == n) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}