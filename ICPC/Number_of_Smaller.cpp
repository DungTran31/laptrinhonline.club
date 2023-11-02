#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    // mảng a và b là 2 mảng sắp xếp tăng dần
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    while (i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }else{
            cout << i << " "; 
            j++;
        }
    }
    while (j < m){
        cout << n << " "; j++;
    }
}