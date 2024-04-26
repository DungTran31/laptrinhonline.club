#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                if (!isPrime(i)) {
                    cnt++;
                }
            } else {
                if (!isPrime(i)) {
                    cnt++;
                }
                if (!isPrime(n / i)) {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
