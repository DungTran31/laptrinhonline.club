#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = (int)1e9 + 7;

int count(int n) {
    int res = 1; // Khởi tạo kết quả bằng 1, vì mọi số đều có ít nhất 1 ước

    // Tính số ước bằng cách tìm các thừa số nguyên tố trong n
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            res = (res * (count + 1)) % MOD; // Áp dụng công thức
        }
    }

    // Nếu n còn lại sau vòng lặp trên, nó là số nguyên tố
    if (n > 1) {
        res = (res * 2) % MOD; // Áp dụng công thức cho số nguyên tố
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<int> a(1, 1); // Khởi tạo vector chứa sẵn phần tử 1
    for (int i = 2; i <= n; i++) {
        long long nho = 0;
        for (int j = 0; j < a.size(); j++) { 
            nho += a[j] * i;
            a[j] = nho % 10;
            nho /= 10;
        }
        while (nho) {
            a.push_back(nho % 10);
            nho /= 10;
        }
    }
    reverse(a.begin(), a.end());
    string res = "";
    for (int i = 0; i < a.size(); i++) {
        string x = to_string(a[i]);
        res += x;
    }
    int ans = count(stoi(res));
    cout << ans;
    
    
    return 0;
}

