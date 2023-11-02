#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;

// deque<kiểu dữ liệu> tên biến;
// có thể lấy ra và đưa vào ở cả 2 đầu
// dq.push_back(x): đưa x vào cuối hàng chờ dq
// dq.push_front(x): đưa x vào đầu hàng chờ dq
// dq.pop_back(x): xóa x ptu cuối hàng chờ dq
// dq.pop_front(x): xóa x ptu đầu hàng chờ dq
// dq.front(): trả về giá trị đầu hàng chờ dq
// dq.back(): trả về giá trị cuối hàng chờ dq
// dq.size(): trả về số phần tử trong dq


int main(){
    deque<char> dq;
    string str; 
    getline(cin, str);
    for(int i = 0; i < str.size(); i++){
        if(str[i]!='#'){
            dq.push_back(str[i]);
        }else{
            if(dq.size()!=0) dq.pop_back();
        }
    }
    for(int i = 0; dq.size()!=0; i++){
        cout << dq.front();
        dq.pop_front();
    }
}