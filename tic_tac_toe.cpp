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
    int x,y;
    cin>>x>>y;
    if((x==1||x==3||x==7||x==9||x!=5||y==8)&&y!=5&&x!=2&&x!=8&&x!=6){
        cout<<"X";
    } else {
        cout<<"D";
    }
    return 0;
}

