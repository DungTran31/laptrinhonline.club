#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int s = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        s = a + b;
        cout << s << endl;
    }

    return 0;
}