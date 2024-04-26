#include <iostream>
#define ll long long
using namespace std;
int a[26]={};
int n;
void backtrack(ll cnt, string str){
    if(cnt==n){
        cout << str << endl;
        return;
    }
    for(int i = 0; i < 26; i++){
        if(a[i]==0) continue;
        a[i]--;
        backtrack(cnt+1, str+(char)('A'+i));
        a[i]++;
    }
}

int main(){
    string str;
    cin >> str;
    for(char c : str) a[c-'A']++;
    n = str.size();
    backtrack(0, "");

    return 0;
}

/*
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    
    sort(s.begin(), s.end());
    
    do cout << s << '\n';
    while(next_permutation(s.begin(), s.end()));
    
    return 0;
}
*/