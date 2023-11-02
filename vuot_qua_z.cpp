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

    int x, z; 
    cin >> x;
    do
    {
        cin >> z;
    } while (z<=x);
    
    int s = 0, cnt = 0;
    while (s<=z){
        s+=x;
        x++;
        cnt++;
    }
    
    cout << cnt;
    

    return 0;
}

