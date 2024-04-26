#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long

main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);
    int res = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if(a[i]>b[j]){
            res++;
            j++;
        }
        i++;
    }
    
    cout << res;
}