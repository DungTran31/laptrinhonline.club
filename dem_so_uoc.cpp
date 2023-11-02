#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;
/*
(x/15 + x/21 + x/35) là số lượng số nguyên chia hết đồng thời cho ít nhất hai trong ba số 3, 5 và 7. Sử dụng cơ số chung lớn nhất (LCM) để tính.
x/105 là số lượng số nguyên chia hết cho ít nhất ba số 3, 5 và 7.
Dòng 20: Inclusion-Exclusion Principle: Ta cộng tổng số lượng các số nguyên chia hết cho mỗi số riêng lẻ (3, 5, 7), 
sau đó trừ đi số lượng các số chia hết cho ít nhất hai trong ba số, cuối cùng cộng thêm số lượng các số chia hết cho cả ba số. 
Kết quả này là số lượng các số nguyên từ 1 đến x chia hết cho ít nhất một trong ba số 3, 5 hoặc 7.
*/
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        cout << x/3 + x/5 + x/7 - (x/15 + x/21 + x/35) + x/105 << endl;
    }
    return 0;
    
}

