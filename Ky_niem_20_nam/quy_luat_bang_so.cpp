#include <bits/stdc++.h>
#define endl "\n"
const int MOD = (int)1e9 + 7;
const long long limit = 1e18;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned long long a[101][101];
    int x, y; cin >> x >> y;
    int h = 0, c = 0;
    for (int j = 0; j < 100; j++){
        a[h][j] = 1;
    }
    for (int i = 0; i < 100; i++){
        a[i][c] = 1;
    }
    for (int i = 1; i < 100; i++){
        for (int j = 1; j < 100; j++){
            a[i][j] = a[i-1][j-1]+a[i-1][j];
        }
    }
    //if(a[x-1][y-1]<=0) {
    if(a[x-1][y-1]>1e18 || a[x-1][y-1]==0){
        cout << -1;
    } else {
        cout << a[x-1][y-1];  
    }
    return 0;
}

