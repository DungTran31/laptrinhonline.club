#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
const int MOD = (int)1e9 + 7;

typedef struct toado{
    int x, y;
};

main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    toado a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;
    }
    for(int i=0;i<m;i++){
        cin>>b[i].x>>b[i].y;
    }
    for (int i = 0; i < n; i++){
        int ans = 0;
        int dist = abs(a[i].x-b[0].x)+abs(a[i].y-b[0].y);
        for(int j=1;j<m;j++){
            int temp=abs(a[i].x-b[j].x)+abs(a[i].y-b[j].y);
            if(temp<dist){
                ans=j;
                dist=temp;
            }
        }
        cout<<ans+1<<endl;
    }
}