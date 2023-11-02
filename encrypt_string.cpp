#include<bits/stdc++.h>
using namespace std;

/*
string he10Tohe16(int he10) {
    string he16 = "";
    while (he10 > 0) {
        int sodu = he10 % 16;
        if (sodu < 10) {
            he16 += char(sodu + '0');
        } else {
            he16 += char(sodu - 10 + 'a');
        }
        he10 /= 16;
    }
    reverse(he16.begin(), he16.end());
    return he16;
}
*/

string he10Tohe16(int he10){
    string he16;
    int i=0;
    while(he10!=0){
        int temp=he10%16;
        if(temp<10){
            he16.push_back(temp+48);
            i++;
        }
        else{
            he16.push_back(temp+87);
            i++;
        }
        he10/=16;
    }
    return he16;
}

string encode(string &s){
    string res;
    int cnt=0;
    for(int i=1;i<=s.length();i++){
        cnt++;
        if(s[i-1]!=s[i]){
            res+=s[i-1];
            res+=he10Tohe16(cnt);
            cnt=0;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        cout << encode(str) << '\n';
    }
    return 0;
}


