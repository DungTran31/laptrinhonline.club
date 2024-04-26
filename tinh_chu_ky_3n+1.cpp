#include <iostream>
using namespace std;

int cntLength(int n){
    int cnt = 1; // Bắt đầu tính từ 1 vì chúng ta đã có số n trong chuỗi
    while (n!=1)
    {
        if(n%2==0){
            n /= 2;
        }else{
            n = 3*n + 1;
        }
        cnt++;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    cout << cntLength(n) << " ";
    cout << n;
    while (n!=1)
    {
        if(n%2==0){
            n /= 2;
        }else{
            n = 3*n + 1;
        }
        cout << " " << n;
    }
    return 0;
}