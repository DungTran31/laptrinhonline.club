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
    for (int i = 1; i <= n; i++){
        int dem = i;
        while (dem>0){
            cout << "*";
            dem--;
        }
        cout << endl;
    }
    

    return 0;
}

