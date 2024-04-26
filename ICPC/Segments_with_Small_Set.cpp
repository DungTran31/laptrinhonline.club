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
    

    int left = 1;
    
    map <int, int> A;
    A[a[1]] = 1;

    for (int right = 1; right <= n; right++)
    {
        // Khi mà kích thước của map vẫn đang lớn hơn k thì ta loại bỏ 
        // phẩn tử a[left] khỏi đoạn con đang xét
        while(A.size() > k)
        {
            A[a[left]]--;
            if (A[a[left]] == 0)
                A.erase(a[left]);
            left++;
        }

        // Tìm được đoạn [l, r] thỏa mãn rồi thì các đoạn [l, r - 1], ..., [l, l] cũng thỏa mãn
        // Tổng các đoạn con (kể cả [l, r]) là (right - left + 1)
        ans += (right - left + 1);
        A[a[right + 1]] += 1;
    }


    

    cout << ans << endl;
}
