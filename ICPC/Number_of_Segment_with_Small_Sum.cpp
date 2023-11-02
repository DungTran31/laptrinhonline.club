#include <bits/stdc++.h>
using namespace std;

#define int long long 

int n, s, a[100005], ans = 0;

signed main() 
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    int sum = a[1], left = 1;
    for (int right = 1; right <= n; right++) 
    {
        // Chuyển cực trái của đoạn lên 1 đơn vị cho đến khi thỏa mãn điều kiện 
        // hoặc đến khi cực trái đi quá cực phải (left > right)
        while (sum > s && left <= right) 
        {
            sum -= a[left];
            left++;
        }

        // Nếu đoạn hiện tại đang xét [l, r] thỏa mãn điều kiện 
        // ==> Các đoạn con [l, r - 1], [l, r - 2],.. cũng thỏa mãn
        // và có tất cả (right - left + 1) đoạn thỏa mãn (tính cả [l, r]);
        ans += (right - left + 1);
        sum += a[right + 1];
    }
    cout << ans << endl;
}
