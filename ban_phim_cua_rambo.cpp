#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    str[str.size()] = '\0';
    deque <char> dq;
    for (int i = 0; i < str.size(); i++){
        if(str[i] != 'B') dq.push_back(str[i]);
        else if (!dq.empty() && str[i] == 'B') dq.pop_back();
        else continue;
    }
    while (!dq.empty())
    {
        cout << dq.front();
        dq.pop_front();
    }
    return 0;
}