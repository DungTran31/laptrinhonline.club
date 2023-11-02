#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    ll n; cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(i%2==1){
            ans += i;
        }else{
            ans -= i;
        }
    }
    cout << ans << endl;
}   