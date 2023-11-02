#include <stdio.h>
typedef long long ll;

void phantich(ll n) {
    ll divisor = 2; // Bắt đầu từ số nguyên tố nhỏ nhất là 2

    while (n > 1) {
        ll cnt = 0;
        while (n % divisor == 0) {
            n /= divisor;
            cnt++;
        }

        if (cnt > 0) {
            printf("%lld %lld\n", divisor, cnt);
        }
        divisor++;
    }
}

int main() {
    ll n;
    scanf("%lld", &n);

    phantich(n);

    return 0;
}
