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
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int k=a[n-2];
    int ans=0;
    for (int i = 0; i < n; i++){
        if(a[i]<k){
            ans+=k-a[i];
        }
    }

    cout << ans;
    return 0;
}

