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

    string s; cin >> s;
    cout << s << endl;
    int n = s.length();
    for (int i = 0; i < n; i++){
        if(s[i]>=65&&s[i]<=90){
            cout << (char)(s[i]+32);
        }else{
            cout << (char)(s[i]-32);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(s[i]>=97&&s[i]<=122){
            cout << (char)(s[i]-32);
        }else{
            cout << (char)(s[i]);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(s[i]>=65&&s[i]<=90){
            cout << (char)(s[i]+32);
        }else{
            cout << (char)(s[i]);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            cout << (char)(s[i]+32);
        } else if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cout << (char)(s[i]);
        } else if(s[i]>=97&&s[i]<=122){
            cout << (char)(s[i]-32);
        }else if(s[i]>=65&&s[i]<=90){
            cout << (char)(s[i]);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            if(s[i]>=65&&s[i]<=90){
                cout << (char)(s[i]);
            }else{
                cout << (char)(s[i]-32);
            }
        }else{
            if(s[i]>=65&&s[i]<=90){
                cout << (char)(s[i]+32);
            }else{
                cout << (char)(s[i]);
            }
        }
    }

    return 0;
}

