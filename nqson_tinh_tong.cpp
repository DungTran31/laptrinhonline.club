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

    long n, x; cin >> n >> x;
    long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==x){
                if(a[i]<a[j])
                    cout << a[i] << " " << a[j];
                else
                    cout << a[j] << " " << a[i];
                break;
            }
        }
    }
    
    

    return 0;
}

