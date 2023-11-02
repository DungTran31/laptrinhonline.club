#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    getline(cin,str);
    stack<string> st;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==32) {
            st.push(ans);
            ans = "";
        }else{
            ans += str[i];
        }
    }
    st.push(ans);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    
    
    return 0;
}

