#include <iostream>
#include <math.h>
using namespace std;

int giaiPT(float a, float b, float c, float &x1, float &x2) {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        x1 = x2 = 0.0;
        return 0;
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        return 1;
    } else {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        return 2;
    }
}

int main() {
    float X1, X2, a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << -1;
            } else {
                cout << 0;
            }
        } else {
            float delta1 = -4 * b * c;
            if (delta1 < 0) {
                cout << 0;
            } else if (delta1 == 0) {
                cout << 1;
            } else {
                cout << 2;
            }
        }
    } else {
        if (giaiPT(a, b, c, X1, X2) == 0) {
            cout << 0;
        } else if (giaiPT(a, b, c, X1, X2) == 1) {
            if (X1 < 0)
                cout << 0;
            else if (X1 == 0)
                cout << 1;
            else {
                cout << 2;
            }
        } else {
            if (X1 < 0) {
                if (X2 < 0)
                    cout << 0;
                else if (X2 == 0)
                    cout << 1;
                else {
                    cout << 2;
                }
            } else if (X1 == 0) {
                cout << 1;
            } else {
                if (X2 < 0) {
                    cout << 2;
                } else if (X2 == 0) {
                    cout << 3;
                } else {
                    cout << 4;
                }
            }
        }
    }

    return 0;
}
