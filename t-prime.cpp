#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra xem một số nguyên dương có phải là số nguyên tố hay không
long long isPrime(long long n){
    for (long long i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        
        // Kiểm tra xem x có phải là số T-prime hay không
        // Một số nguyên dương là số T-prime nếu và chỉ nếu căn bậc hai của nó là số nguyên tố
        double sqrt_x = sqrt(x);
        if (sqrt_x == floor(sqrt_x) && isPrime(sqrt_x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
