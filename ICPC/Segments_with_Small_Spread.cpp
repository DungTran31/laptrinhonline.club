#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 1e5 + 5;

int n, k, a[MAXN];
int ans = 0;

signed main() 
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    

    int left = 1, right = 1;
    // multiset dùng để chứa đoạn con đang xét
    multiset<int> window = {a[1]};

    while (right <= n) 
    {
        auto max_el = *window.rbegin();
        auto min_el = *window.begin();

        //Nếu đoạn con [l, r] thỏa mãn thì các đoạn con [l, r - 1],...[l, l] cũng thỏa mãn
        // Và tổng số đoạn con (kể cả [l, r]) là (right - left + 1)
        // Tăng cận phải lên 1 đơn vị và thêm giá trị của cận phải mới vào multiset
        if (max_el - min_el <= k) 
        {
            ans += right - left + 1;
            right++;
            if (right <= n)
                window.insert(a[right]);
        } 
        // Nếu không thỏa mãn thì xóa đi phần tử a[left] khỏi multiset
        // Và tăng cận trái lên 1 đơn vị
        else 
        {
            window.erase(window.find(a[left]));
            left++;
        }
    }

    cout << ans << endl;
}
