#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    string x;
    getline(cin, x);

    // Tạo một set chứa các chữ cái thường để theo dõi
    set<char> ans;

    // Thêm các chữ cái thường vào set
    for (char c = 'a'; c <= 'z'; c++) {
        ans.insert(c);
    }

    // Loại bỏ khoảng trắng và chữ cái thường có trong xâu X
    for (char c : x) {
        if (c) {
            ans.erase(c);
        }
    }

    // In ra các chữ cái thường không có trong xâu X
    for (char c : ans) {
        cout << c;
    }
    cout << endl;

    return 0;
}

/*
int main(){
    std::string str; std::cin>>str;
    for(char c='a';c<='z';c++){
        bool c_in_str = false;
        for(char c2:str){
            if(c==c2)c_in_str=true;
        }
        if(c_in_str==false)std::cout<<c;
    }
}
*/