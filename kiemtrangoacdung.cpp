#include<iostream>
#include<stack>
#include<map>
using namespace std;
//Đề bài : https://w...content-available-to-author-only...e.club/problem/kiemtrangoacdung

/* Ý tưởng : dùng stack để lưu các dấu đóng ngoặc 
Duyệt qua chuỗi ngoặc:
+ Gặp dấu mở ngoặc (thỏa mãn yêu cầu bài toán) thì đẩy dấu đóng ngoặc tương ứng vào stack 
+ Gặp dấu đóng ngoặc, nếu dấu ngoặc ngoài cùng stack trùng với dấu ngoặc hiện tại có thì xóa phần tử ngoài cùng của stack đi

- Cuối cùng kiểm tra xem stack rỗng và chưa gặp 1 trường hợp nào không thỏa mãn bài toán thì là chuỗi ngoặc đúng (sai khi 1 trong 2 điều kiện trên sai)*/

int main() 
{
	map<char, char> mp{{'(', ')'}, {'[', ']'}, {'{', '}'}}; // Lưu các dấu ngoặc theo cặp
	map<char, int> Priority{{'(', 1}, {'[', 2}, {'{', 3}, {')', 1}, {']', 2}, {'}', 3}}; // Lưu độ ưu tiên của các dấu ngoặc
	int t; cin >> t;
	while(t--)
    {
		stack<char> s;
		string x; 
		cin >> x;
		int check = 1; 
		for(char c : x) // duyệt qua từng kí tự 
        { 
            // Nếu kí tự đang xét là dấu mở ngoặc
			if(c == '(' || c == '[' || c == '{') 
            {
                // Nếu stack không rỗng và độ ưu tiên của kí tự hiện tại lớn hơn kí tự ngoài cùng của stack -> dãy sai 
                // Case: ({...
				if(s.size() && Priority[c] > Priority[s.top()]) 
                { 
					check = 0; 
					break;
				}
				s.push(c); // Đẩy dấu ngoặc vào stack
			}
            // Nếu kí tự đang xét là dấu ngoặc đóng
			else 
            {
                // Nếu stack rỗng --> sai
                // Dầu ngoặc ngoài cùng không phải ngoặc mở tương ứng của c --> sai
				if(s.empty() || mp[s.top()] != c) 
                { 
					check = 0; 
					break;
				}
				else s.pop(); 
			}
		}
        
		if(check == 1 && s.empty()) cout << "Dung" << endl; 
		else cout << "Sai" << endl;
	}
}