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
	int a,b,res;
	if(s[0] == 'x'){
		a = s[2] - '0';
	    b = s[4] - '0';
		if(s[1] == '+'){
			res = b-a;
		}else{
			res = b + a;
		}
	}else{
        a = s[0] - '0';
        b = s[4] - '0';
        if(s[1] == '+'){
            res = b - a;
        }
        else res = a - b;
	}
	if(res < 0) cout << "Khong tim duoc x";
	else cout << "x="<<res;
    return 0;
}