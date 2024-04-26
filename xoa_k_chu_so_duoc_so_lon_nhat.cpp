/*Ý tưởng: ta xét những chữ số nào nhỏ nhất trong đoạn k để tạo ra số lớn nhất.
Tạo 1 list L để chứa những chữ số lớn nếu chữ số tiếp theo mà lớn hơn trước thì pop_back và cuối cùng thêm kí tự*/
#include<bits/stdc++.h>
using namespace std;
void xoa(string x,int k){
    list<char> L;
    for(auto c:x)
    {
        while(L.size() && k > 0 && L.back() < c)
        {
            L.pop_back();
            k--;
        }
        L.push_back(c);
    }


    while(k > 0)
    {
        L.pop_back();
        k--;
    }
    for(auto x : L)
        cout << x;
    cout << endl;
}

int main(){
    string x;
    int t, k;
    cin >> x >> t;
    while(t--){
        cin >> k;
        xoa(x, k);
    }
}
