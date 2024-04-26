#include <iostream>
#include <map>
using namespace std;


int main(){
    map<int, int> tong;
    map<int, int> hieu;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        tong[x+y]++;
        hieu[x-y]++;
    }
    int res = 0;
    for(auto it : tong){
        int value = it.second;
        res += value * (value - 1)/2;
    }
    for(auto it : hieu){
        int value = it.second;
        res += value * (value - 1)/2;
    }
    cout << res;
}