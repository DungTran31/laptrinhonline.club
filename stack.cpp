#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// stack<kiểu dữ liệu> tên biến;
// x.push(a) : đẩy phẩn tử a vào trong stack x
// x.pop(): đưa phần tử trên cùng của stack X ra ngoài
// x.size(): trả về số phần tử trong stack
// x.empty(): trả về true khi mà stack rỗng, ngược lại là false
// x.top(): trả về phần tử trên cùng

// kiểm tra có đủ dãy ngoặc: ()()()
// string: "()())((" như này là sai
/*
(()(()))
2 3
5 6
4 7
1 8
*/
void sol1()
{
    string A; cin >> A;
    stack <char> B;
    for (int i = 0; i < A.size(); i++){
        if (A[i] == '(')
            B.push(A[i]);
        else if (A[i] == ')')
        {
            if (B.size() == 0){
                cout << "Sai\n";
                return;
            }
            if (B.top() == '(')
                B.pop();
            else{
                cout << "Sai\n";
                return;
            }
        } 
    }
    if (!B.empty()){
        cout << "Sai\n";
        return;
    }
    cout << "Dung";
}

void sol(){
    string str;cin>>str;
    int n=str.size();//n=8
    stack<char>sk;
 
    //kiem tra ngoac dung hay sai
    for(int i=0;i<n;i++){
        if(str[i]=='(') sk.push(str[i]);
        else{
            if(sk.empty()){// ()))
                cout<<"NO";return ;
            }else{
                sk.pop();
            }
        }
    }
    if(sk.empty())cout<<"YES"<<endl;
    else {
        cout<<"NO";return ;
    }
    //in ra chi so ngoac
    stack<int>sk2;
    for(int i=0;i<n;i++){
        if(str[i]=='(') sk2.push(i+1);
        else{
            cout<<sk2.top()<<" "<<i+1<<endl;
            sk2.pop();
        }
    }
}

int main(){
    /*
    // stack<kiểu dữ liệu> tên stack
    stack<int> a;
    for(auto i: {1, 4, 56, 78}){
        a.push(i);
    }
    while(a.size()){
        cout << a.top() << " ";
        a.pop();
    }
    */

    sol();

    // chỉ dùng stack, nhập vào n phần tử in ra như lúc nhập vào
    /*
    int n; cin >> n;
    stack<int> a,b;
    for (int i = 1; i <= n; i++) {
        a.push(i);
    }
    //truyền từ a -> b
    while(a.size()>0)
    {
        int tmp = a.top();
        a.pop();
        b.push(tmp);
    }
    
    //in ra màn hình
    while(!b.empty()){
        cout << b.top() << " ";
        b.pop();
    }
    */

}
