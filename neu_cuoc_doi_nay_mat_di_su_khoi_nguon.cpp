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
    long a, b;
    cin >> a >> b;
    long sum = a+b;
    string str_a = to_string(a);
    string str_b = to_string(b);
    string str_sum = to_string(sum);
    string new_a = "";
    string new_b = "";
    string new_sum = "";
    for (int i = 0; i < str_a.length(); i++){
        if(str_a[i] != '0') new_a += str_a[i];
    }
    for (int i = 0; i < str_b.length(); i++){
        if(str_b[i] != '0') new_b += str_b[i];
    }
    for (int i = 0; i < str_sum.length(); i++){
        if(str_sum[i] != '0') new_sum += str_sum[i];
    }
    long a1 = stol(new_a);
    long b1 = stol(new_b);
    long sum1 = stol(new_sum);
    if(a1+b1==sum1) cout << "YES";
    else cout << "NO";
    return 0;
}

