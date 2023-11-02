#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--){
        int x, y; cin >> x >> y;
        int sum = 0;
        if(x>y) swap(x,y);
        for (int i = x + 1; i < y; i++){
            if(i%2!=0){
                sum += i;
            }
        }
        cout << sum << "\n";
    }
    

    return 0;
}

