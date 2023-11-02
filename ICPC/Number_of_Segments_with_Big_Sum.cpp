#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, s, a[100005], ans = 0;

signed main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int sum = a[1], left = 1;

    // Cho right chạy từ 1 vì có thể đoạn con [1, 1] cũng thỏa mãn điều kiện
    for (int right = 1; right <= n; right++)
    {
        // Nếu đoạn [l, r] hiện tại thỏa mãn -> các đoạn [l, r + 1], .. [l, n] cũng thỏa mãn
        // --> có tất cả (n - right + 1) đoạn tính cả [l, r]
        // Sau khi thấy [l, r] thảo mãn thì xét tiếp [l + 1, r]. 
        // Nếu đoạn [l + 1, r] không thỏa mãn thì ta thoát vòng lặp và tiếp tục tăng right lên 
        while (sum >= s && left <= right)
        {
            ans += (n - right + 1);
            sum -= a[left];
            left++;
        }

        sum += a[right + 1];
    }
    cout << ans << endl;
}
