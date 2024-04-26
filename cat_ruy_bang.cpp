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
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;
    // Sử dụng hai vòng lặp lồng nhau để thử tất cả các tổng 
    // có thể được tạo bằng các đoạn dài a và b
    // Vòng lặp ngoài thể hiện số lượng đoạn dài a, 
    // và vòng lặp bên trong thể hiện số lượng đoạn dài b
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int total = i * a + j * b;
            if (total <= n && (n - total) % c == 0) {
                int k = (n - total) / c;
                ans = max(ans, i + j + k);
            }
        }
    }

    cout << ans;
    return 0;
}

