#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    // mảng a và b là 2 mảng sắp xếp tăng dần
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m){
        if(a[i] < b[j]){
            i++; continue;
        }else if(a[i]> b[j]){
            j++; continue;
        }
        ll dem1 = 0, dem2 = 0;
        while(i < n && a[i]==b[j]){
            dem1++; i++;
        }
        // Tạo 1 biến tạm để tránh xét vượt quá mảng
        int tmp = a[i-1];
        while(j < m && tmp ==b[j]){
            dem2++; j++;
        }
        ans += dem1 * dem2;
    }
    cout << ans << endl;
    
    return 0;
}