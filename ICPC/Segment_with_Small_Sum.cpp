#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    int l = 0, r, ans = 0;
    for(r = 0; r < n; r++){
        sum += a[r];
        while (sum > s){
            sum -= a[l]; l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;  
}
