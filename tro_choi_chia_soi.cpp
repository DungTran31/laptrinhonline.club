#include <iostream>
using namespace std;

const int mod = 1000000007;
const int limit = 100000;

int main() {
    int t;
    cin >> t;
    int test = 0;

    while (test++ < t) {
        int n;
        cin >> n;

        cout << "Test Case #" << test << ": ";

        if (n % 2 == 0) {
            cout << "Atreus" << endl;
        } else {
            cout << "Kratos" << endl;
        }
    }

    return 0;
}
