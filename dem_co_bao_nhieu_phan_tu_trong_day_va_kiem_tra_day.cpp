#include <bits/stdc++.h>
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
    int c, d; cin >> c >> d;
    int a[n], dem=0;
    c*=-1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>=c&&a[i]<=d) dem++;
    }
    cout << dem << endl;
    bool isInc = true;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<=a[i]){
                isInc = false;
                break;
            }
        }
    }
    if(isInc) {
        cout << "YES";
    } else cout << "NO";
    
    

    return 0;
}

