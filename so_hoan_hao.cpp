#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// Hàm tính tổng các ước số dương của một số nguyên
ll sumOfDivisors(ll num) {
    ll  sum = 1; // 1 là ước số của mọi số
    for (ll  i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        ll  X;
        cin >> X;

        ll  divisorSum = sumOfDivisors(X);
        if(X == 1) cout << "1 nao eh perfeito\n"; 
        else if (divisorSum == X) {
            cout << X << " eh perfeito\n";
        } else {
            cout << X << " nao eh perfeito\n";
        }
    }

    return 0;
}

