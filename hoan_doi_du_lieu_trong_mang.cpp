#include <iostream>
using namespace std;
int main() {
    int N[20];
    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }
    int cnt = 0;
    for (int i = 19; i >= 0; i--) {
        cout << "N[" << cnt << "] = " << N[i] << endl;
        cnt++;
    }
    return 0;
}