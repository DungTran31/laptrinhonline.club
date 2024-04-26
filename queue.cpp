#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

//first in first use
//queue<kiểu dữ liệu> tên biến;
//x.push(a): đẩy phần tử a vào hàng chờ x
//x.pop(): bỏ phần tử đầu tiên của hàng chờ ra 
//x.front(): trả về giá trị của phần tử đang chờ đầu tiên của hàng chờ
//x.back():  trả về giá trị của phần tử đang chờ cuối cùng của hàng chờ
//x.size(): số phần tử trong queue
//x.empty(): kiểm tra queue có rỗng ko

int main(){
    queue<string> list_nhac;
    list_nhac.push("Em cua ngay hom qua");
    list_nhac.push("Rap God");
    list_nhac.push("Con mua ngang qua");

    cout << "Dang phat bai: " << list_nhac.front() << endl;
    list_nhac.pop(); // xóa bài nhạc đang phát
    cout << "Dang phat bai: " << list_nhac.front() << endl;
    
    
    return 0;
}