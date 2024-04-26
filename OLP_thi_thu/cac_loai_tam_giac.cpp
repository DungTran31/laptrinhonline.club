#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A >= B + C || B >= A + C || C >= A + B) {
        cout << "KHONG PHAI TAM GIAC" << endl;
    } else if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
        cout << "TAM GIAC VUONG" << endl;
    } else if (A * A > B * B + C * C || B * B > A * A + C * C || C * C > A * A + B * B) {
        cout << "TAM GIAC TU" << endl;
    } else if (A * A < B * B + C * C || B * B < A * A + C * C || C * C < A * A + B * B) {
        cout << "TAM GIAC NHON" << endl;
    }

    if (A == B && B == C) {
        cout << "TAM GIAC DEU" << endl;
    } else if (A == B || B == C || A == C) {
        cout << "TAM GIAC CAN" << endl;
    }

    return 0;
}