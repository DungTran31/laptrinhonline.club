#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int max1 = 0, max2 = 0, max3 = 0, i1 = 0, i2 = 0, i3 = 0;
    for(int i = 0; i < n; i++){
        if(mp[a[i]] > max1){
            max1 = mp[a[i]];
            i1 = a[i];
        } 
    }
    for(int i = 0; i < n; i++){
        if(mp[a[i]] > max2 && mp[a[i]] <= max1 && a[i] != i1){
            max2 = mp[a[i]];
            i2 = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(mp[a[i]] > max3 && mp[a[i]] <= max2 && a[i] != i1 && a[i] != i2){
            max3 = mp[a[i]];
            i3 = a[i];
        }
    }
    cout << i1 << " " << i2 << " " << i3 << endl;
    return 0;
}