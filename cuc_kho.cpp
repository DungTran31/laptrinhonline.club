#include <iostream>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        // Tính tổng các số từ 1 đến n với modulo MOD
        ll sum_n = ((n % MOD) * ((n % MOD + 1 % MOD) % MOD) / 2 % MOD) % MOD;
        
        // Tính bình phương của kết quả với modulo MOD
        ll s = (sum_n % MOD * sum_n % MOD) % MOD;
        
        cout << s << " ";
    }
    
    return 0;
}
