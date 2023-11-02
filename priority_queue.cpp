#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

// hàng đợi ưu tiên
// lấy số lớn nhất ra trc
// priority_queue<kiểu dữ liệu> tên biến;
// các hàm giống queue


int main(){
    ll res = 0;
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    // lấy số bé nhất
    priority_queue<int,vector<int>,greater<int>> pq;
    // cho thanh kim loại vào hàng đợi
    for(int &x : a) pq.push(x);

    // cho đến khi ko còn thanh kim loại
    while (pq.size() > 1)
    {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        res+=x+y;
        pq.push(x+y);
    }
    cout << res;
}