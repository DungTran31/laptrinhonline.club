#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    priority_queue<pair<int,int>> pq;
    for(int i = 0; i < k; i++){
        pq.push({a[i],i});
    }
    // tìm thằng cao nhất
    for(int i = k - 1;i < n; i++){
        while (pq.top().second<i-(k-1)){
            pq.pop();
        }
        pq.push({a[i],i});
        cout << pq.top().first << " ";
    }
    /*
    int n, k, x;
    list <pair<int, int>>L;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        while(L.size() && L.back().second <= x)
            L.pop_back();
        L.push_back({i, x});
        if(i >= k)
        {
            while(i - L.front().first >= k)
                L.pop_front();
            cout << L.front().second << " ";
        }
    }

    */
}
