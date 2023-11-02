#include <bits/stdc++.h>
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long a[7];
    for (int i = 0; i < 7; i++) {
        cin >> a[i];    
    }
    if(a[0] + a[1] != a[3]) {
        if(a[0] + a[1] == a[2] && 
           a[0] + a[3] == a[4] && 
           a[1] + a[3] == a[5] && 
           a[0] + a[1] + a[3] == a[6]) {
            cout << a[0] << " " << a[1] << " " << a[3] << endl;
            return 0;
        }
    } 
    if(a[3] == a[0] + a[1] && 
       a[4] == a[0] + a[2] && 
       a[5] == a[1] + a[2] && 
       a[6] == a[0] + a[1] + a[2]) 
       cout << a[0] << " " << a[1] << " " << a[2] << endl;
    else cout << -1 << endl;

    return 0;
}





