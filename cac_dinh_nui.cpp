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
    int a[n], dem = 0;
    for(int &x : a) cin >> x;
    for (int i = 1; i < n - 1; i++){
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) dem++;
    }
    cout << dem;
    

    return 0;
}

