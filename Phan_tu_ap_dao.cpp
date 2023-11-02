#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int res = 0, ans = 0;
    for(auto it : mp){
        if(it.second > n/2){
            res = it.second;
            ans = it.first;
        }
    }

    if(res > n/2){
        cout << ans << endl;
    }else{
        cout << "khong co phan tu ap dao" << endl;
    }
    return 0;
}