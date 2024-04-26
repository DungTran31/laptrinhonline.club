/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool check = true;
    string str;
    getline(cin, str);
    // Khi bạn sử dụng phương thức find trên một chuỗi std::string, nó sẽ trả về std::string::npos nếu chuỗi con bạn đang tìm kiếm không được tìm thấy trong chuỗi gốc
    if (str.find(' ') != string::npos)
    {
        check = false;
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int n = s.size();
	 
	for (int i = 0; i < n; i++) {
		if(s[i] == ' ' || s[i] == toupper(s[i]) || !isalpha(s[i])){
			cout << "NO";
			return 0; 
		} 
	} 
	cout <<  "YES";
	return 0; 
}

/*
main(){
    // std::string str;
    // std::getline(std::cin,str);
    char c;
    while(scanf("%c",&c) && c!='\n'){
        if(c<'a' || c>'z'){
            std::cout<<"NO";
            return 0;
        }
    }
    std::cout<<"YES";
}
*/