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
    int L, l, x; cin >> L >> l;
    x=l+1;
    int sokhuc=L/l;
    sokhuc-=1;
    int du = ((L-((sokhuc+1)*l))+1);
    if(L%l!=0){
        cout << sokhuc*x + du;
    }else cout << sokhuc*x;
        
    
    
    return 0;
}

