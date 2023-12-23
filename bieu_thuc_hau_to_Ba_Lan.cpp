/*ý tưởng: tạo 1 stack để chứa các dấu (,+,-,*,/
cho dữ liệu in chạy:
 + nếu là 0->9 thì thêm vào out
 + nếu là '(' thì cất vào stack đến khi gặp ')' sẽ thêm các dấu đã lưu trong stack vào out và pop toàn bộ
 + nếu là +,-,*,/ thì thêm vào out các dấu đã lưu trong stack đến hết, và thêm dấu đó vào stack
cuối cùng thêm lại toàn bộ stack vào out */

#include <iostream>
#include <map>
#include <stack>
using namespace std;
map <char, int> UT = {{'(', 0}, {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};
int kq(int a,int b,char c){
    if(c == '+') return a + b;
    if(c == '-') return a - b;
    if(c == '*') return a * b;
    return a/b;
}

string Balan(string in){
    string out = "";
    stack<char> S;
    for(char c : in)
        if('0' <= c && c <= '9')
            out += c;
        else if(c == '(') S.push(c);
        else if(c == ')'){
            while(S.top() != '('){
                out += S.top();
                S.pop();
            }
            S.pop(); //lấy nốt dấu '(' ra khỏi stack
        }
        else{ //toán tử + - * /
            while(S.size() && UT[S.top()] >= UT[c]){
                out += S.top();
                S.pop();
            }
            S.push(c);
        }
        while(S.size()){
            out += S.top();
            S.pop();
        }
    return out;
}

int giatri(string out){
    stack<int> S;
    for(char c:out)
        if('0' <= c && c <= '9') S.push(c - '0');
        else{
            int a = S.top(); S.pop();
            int b = S.top(); S.pop();
            S.push(kq(b, a, c));
        }
    return S.top();
}
int main(){
    string in, out = "";
    cin >> in;
    out = Balan(in);
    cout << out << "\n" << giatri(out);
}
