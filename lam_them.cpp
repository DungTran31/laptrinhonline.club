#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<int> a(1, 1); // Khởi tạo vector chứa sẵn phần tử 1
    for (int i = 2; i <= n; i++) {
        long nho = 0;
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
    for (int j = 0; j < a.size(); j++) {
        cout << a[j];
    }
    return 0;
}

