#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    unsigned int l=n.length();
    unsigned int lon=0,dem=0;
    bool x=false;
    for(unsigned int i=0;i<l-1;i++){
        if(n[i]>n[lon]){
            x=true;
            break;}
        if(n[i]<n[lon]){
            break;
            
        }
        if(n[i]==n[i+1]){
            dem++;
        }
    }
    if(dem!=l-1){
    if(x){
        for(unsigned int i=0;i<l;i++){
            cout<<n[0]-'0'+1;
        }cout<<endl;
        for(unsigned int i=0;i<l;i++){
            cout<<n[0];
        }
    }
    else{
        for(unsigned int i=0;i<l;i++){
            cout<<n[0];
        }cout<<endl;
        for(unsigned int i=0;i<l;i++){
            cout<<n[0]-'0'-1;
        }
    }}else{
        cout<<n<<endl<<n;
    }

}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	set <char> se;
	for (int i = 0; i < s.length(); i++) se.insert(s[i]);
	char k = s[0];
	auto it = se.find(k);
	for (int i = 1; i < s.length(); i++){
		if (s[0] < s[i]) {
			for (int i = 0; i < s.length(); i++) cout << (k - '0' + 1);
			cout << endl;
			for (int i = 0; i < s.length(); i++) cout << (k - '0');
			return 0;
		}
		else if (s[0] > s[i]) {
			for (int i = 0; i < s.length(); i++) cout << (k - '0');
			cout << endl;
			for (int i = 0; i < s.length(); i++) cout << (k - '0' - 1);
			return 0;
		}
	}
	for (int i = 0; i < s.length(); i++) cout << (k - '0');
	cout << endl;
	for (int i = 0; i < s.length(); i++) cout << (k - '0');
*/

/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Hàm kiểm tra xem một số có phải là monodigit hay không
bool isMonodigit(string str) {
    char digit = str[0];
    for (char c : str) {
        if (c != digit) {
            return false;
        }
    }
    return true;
}

string smallerMono(string str) {
    int k = str.length();
    string res = "";
    string ans = "";
    
    if(!isMonodigit(str)){
        for (int i = 1; i < k; i++){
            if(str[i] > str[0]){
                res = str[0];
                break;
            }else if(str[i] == str[0] && !isMonodigit(str)){
                continue;
            }else{
                if(str[0] == '1') {
                    res = '9';
                    k--;
                    break;
                }
                res = to_string(stoll(str.substr(0, 1)) - 1);
                break;
            }
        }
    }else{
        if(str[0] == '1') {
            if(k>1){
                res = '9';
                k--;
                for (int i = 0; i < k; i++){
                    ans += res;
                }
                return ans;
            } else if (k == 0) {
                ans = "0";
                return ans;
            }
        } 
        res = to_string(stoll(str.substr(0, 1)) - 1);
    }

    for (int i = 0; i < k; i++){
        ans += res;
    }
    return ans;
}

string biggerMono(string str) {
    int k = str.length();
    string res = "";
    string ans = "";
    if(!isMonodigit(str)){
        for (int i = 1; i < k; i++){
            if(str[i] > str[0]){
                res = to_string(stoll(str.substr(0, 1)) + 1);
                break;
            }else if(str[i] == str[0] ){
                continue;
            }else{
                res = str[0];
                break;
            }
        }
    } else {
        if (str[0] == '9') {
            res = '1';
            k++;
        } else {
            res = to_string(stoll(str.substr(0, 1)) + 1);
        }
    }
    for (int i = 0; i < k; i++){
        ans += res;
    }
    return ans;
}

int main() {
    string n;
    cin >> n;
    cout << biggerMono(n) << endl;
    cout << smallerMono(n) << endl;
}
*/