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
    int t; cin >> t;
    while (t--)
    {
        
        long a, b;
        cin >> a >> b;
        
        if (a == b) {
            cout << 0 << endl;
        } else {
            long diff = abs(a - b);
            long n = 1;
            
            while (true) {
                long sum = n * (n + 1) / 2;
                if (sum >= diff && (sum % 2) == (diff % 2)) {
                    cout << n << endl;
                    break;
                }
                n++;
            }
        }
        
        // long dem = 1;
        // if(a==b) {
        //     cout << 0 << endl;
        //     continue;
        // }
        // while (a!=b)
        // {
        //     if(a<b) {
        //         a+=dem;
        //     }
        //     else break; 
        //     if(a==b) break;
        //     dem++;
        //     if(a+dem>b){
        //         b+=dem;
        //     } 
        //     else{
        //         if(a<b) {
        //             a+=dem;
        //         }
        //         else break; 
        //     }
        //     if(a==b) break;
        //     dem++;
        // }
        // cout << dem << endl;
    }
    
    return 0;
}

