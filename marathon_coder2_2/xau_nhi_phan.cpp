#include <iostream>
#include <algorithm>
using namespace std;

// Thuật toán sinh kế tiếp

// cấu hình đầu tiên
// cấu hình cuối cùng
// phương pháp sinh

// <khởi tạo cấu hình đầu tiên>
// while(<khi chưa phải là cấu hình cuối cùng>){
//      <in ra cấu hình hiện tại>
//      <sinh ra cấu hình tiếp theo>
// }

// Sinh xâu nhị phân có độ dài n
/*
VD:
n = 3
000 001 010 011 100 101 110 111 
độ dài 2^n=8
*/


int n, a[100], ok;

void ktao(){
    for(int i = 1; i <=n; i++){
        a[i] = 0;
    }
}

void sinh(){
    //Bắt đầu từ bit cuối cùng, và đi tìm bit 0 đầu tiên
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0){
        ok = 0;// đây chính là cấu hình cuối cùng
    }else{
        a[i] = 1;
    }
}

int main(){
    
    cin >> n;
    ok=1;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}