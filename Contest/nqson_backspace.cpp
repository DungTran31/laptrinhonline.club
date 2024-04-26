#include <iostream>
#include <queue>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    deque<char> dq;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '#'){
            if(dq.size()!=0) dq.pop_back();   
        }else{
            dq.push_back(s[i]); 
        }
    }
    for(int i = 0; dq.size()!=0; i++){
        cout << dq.front();
        dq.pop_front();
    }
    return 0;
}