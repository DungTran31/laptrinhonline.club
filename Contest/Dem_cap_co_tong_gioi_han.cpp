#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll count = 0;

    sort(a, a + n);

    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] <= m) {
            count += r - l;
            l++;
        } else {
            r--;
        }
    }

    cout << count << endl;

    return 0;
}