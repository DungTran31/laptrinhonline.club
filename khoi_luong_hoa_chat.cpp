#include<bits/stdc++.h>
using namespace std;
/*Ý tưởng : Dùng map để lưu khối lượng phân tử của các nguyên tố hóa học và dấu ( (quy ước là 0)
          Dùng stack để lưu giá trị*/


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        map<char,int> M = {{'C', 12}, {'O', 16}, {'(', 0}, {'H', 1}}; // quy ước ( = 0
        string x;
        cin >> x;
        stack<int> S;
        for(auto c : x){
            if(M.find(c) != M.end()) S.push(M[c]); 
            else if(c == ')'){ // tính tổng trong ngoặc
                int t = 0;
                while(S.top() != 0){// cộng vào chừng nào gặp dấu ( thì dừng (quy ước là 0)
                    t += S.top();
                    S.pop();
                }
                S.top() = t; // dấu ( vẫn còn trong stack -> thay giá trị của dấu ( bằng giá trị vừa tính được
            }
            else S.top() *= c-'0';// Nếu là 1 số thì nhân phần tử đầu tiên của stack với số đó
        }
        int t = 0;
        while(S.size()){ // cộng tất cả các giá trị trong stack lại -> tổng
            t += S.top();
            S.pop();
        }
        cout << t << endl;
    }
}

/*
//khoi luong
#include<bits/stdc++.h>
using namespace std;
void sol()
{
	map<char,int> K={{'C',12},{'O',16},{'(',0},{'H',1}};
	string x;
	cin>>x;
	stack<int> S;
	for(auto c:x)
	if(K.find(c)!=K.end()) S.push(K[c]);
	else if(c==')')
	{
		int t=0; 
		while(S.top()!=0) t+=S.top(),S.pop();
		S.top()=t;	
	} 
	else S.top()*=c-'0';
	int t=0; 
	while(S.size()) t+=S.top(),S.pop();
	cout<<t<<"\n";
}
int main()
{
	int test;
	cin>>test;
	while(test--) sol();
}
*/