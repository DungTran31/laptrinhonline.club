#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string ans;
    getline(cin, ans);

    int n = str.length();
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (ans[i] == str[i]) {
            dem++;
        }
    }

    if (n > 0) {
        double result = ((double)dem / n) * 10;
        result *= 10;
        result = ceil(result)/10;
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
