#include <iostream>
using namespace std;

string kiemTraTangGiam(int a[], int n) {
    bool tang = true;
    bool giam = true;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            giam = false;
        } else if (a[i] < a[i - 1]) {
            tang = false;
        }
    }

    if (tang) {
        return "TANG";
    } else if (giam) {
        return "GIAM";
    } else {
        return "KHONGBIET";
    }
}

int main() {
    int a[8];
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    string ket_qua = kiemTraTangGiam(a, 8);
    cout << ket_qua << endl;

    return 0;
}
