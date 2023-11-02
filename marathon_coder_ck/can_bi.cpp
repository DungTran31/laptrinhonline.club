#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;


int solve(long n) {
    // Nếu n = 1 thì không cần cân
    if (n == 1) {
        return 0;
    }

    // Nếu n chẵn, chia đôi và tiếp tục tìm
    if (n % 2 == 0) {
        return 1 + solve(n / 2);
    } else { // Nếu n lẻ, chia lẻ một viên và tiếp tục tìm
        return 1 + solve((n - 1) / 2);
    }
}


main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin >> n;
    //cout << (int)log2(n);
    int res = solve(n);

    cout <<  res << endl;

    return 0;
}

/*
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long n; cin>>n;
    int i=0;
    while(n>1){
        if(n%2==0){
            n=n/2;
        }else{
            n=(n-1)/2;
        }
        i++;
    }
    cout<<i;
}
*/