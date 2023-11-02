#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long res = 1;
    for (int i = 0; i < b; i++){
        res *= a;
        res %= 10;
    }
    cout << res;
    return 0;
}

