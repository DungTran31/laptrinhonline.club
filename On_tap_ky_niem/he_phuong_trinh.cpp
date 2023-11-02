#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        bool found = false; // Biến để kiểm tra xem có nghiệm cho test case hiện tại hay không.
        
        for (int x = 0; x <= 1000; x++) { // Thay 1000 bằng một giá trị tương ứng với phạm vi x bạn quan tâm.
            if ((x | a) == b && (x & c) == d) {
                cout << "YES" << endl;
                found = true;
                break; // Tìm thấy một nghiệm, dừng vòng lặp.
            }
        }
        
        if (!found) {
            cout << "NO" << endl; // Không tìm thấy nghiệm trong phạm vi x đã cho.
        }
    }
    
    
    return 0;
}
