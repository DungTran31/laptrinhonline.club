#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str; cin >> str;
    int t; cin >> t;
    int dem = 0;
    while(t--)
    {
    	dem = 0;
    	int a, b; cin >> a  >> b;
    	char c ; cin.ignore(); cin >> c;

    	for(int i = a - 1; i <= b - 1; i++)
            if(str[i] == c)
                dem++;
    	cout << dem <<' ';
	}
}