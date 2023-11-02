#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while (true)
    {
        int x; cin >> x;
        if(x==0) break;
        for(int i = 1; i <= x; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}

