#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n, q; cin >> n >> q; // p số cần truy vấn
    vector<ll> p;
    
    for(int i = 0; i < q; i++)
    {
        int x; cin >> x;
        p.push_back(x);
    }

    
    for(int l = 0; l < q; l++)
    {
        int x = p[l];

        // Tim toa do 1 phan tu dua tren gia tri cua phan tu do
        int j = (x - 1)/n;
        int i = (x - 1)%n;

        // Doi vai tro cua i va, de tim gia tri tai ma tran moi
        cout << n * i + j + 1 << " ";
    }
    // A[i][j] = n * j + i + 1;
}
    
