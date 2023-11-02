#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string s, saved;
    stack<string> stk;
    while (getline(cin, s)) {
        if (s.empty()) {
            break; // Thoát vòng lặp nếu xâu nhập vào rỗng
        }
        int pos = s.find("&");
        if (pos == -1) {
            // Nếu không có dấu &, xâu sẽ được in ra màn hình
            cout << s << endl;
        } 
        if (s[pos + 1] == 's') {
            // Nếu gặp &s, lưu xâu trước đó vào stack
            stk.push(saved);
            saved = s.substr(0, pos);
        } else if (s[pos + 1] == 'z') {
            // Nếu gặp &z, lấy xâu trước đó từ stack và gán vào saved
            if (!stk.empty()) {
                saved = stk.top();
                stk.pop();
            }
        } else if(s[pos + 1] != 's' && s[pos + 1] != 'z'){
            // Nếu không phải &s hoặc &z, bỏ qua ký tự đó
            cout << ;
        }
    }
    getchar(); // Đọc ký tự Enter từ bàn phím
    return 0;
}
