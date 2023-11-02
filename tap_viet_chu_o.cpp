#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++){
        char s;
        cin >> s;
        if(s=='o') cout << "thuong" << endl;
        else if(s=='O') cout << "hoa" << endl;
        else if(s==48) cout << "khong" << endl;
    }
    return 0;
}