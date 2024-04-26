#include <bits/stdc++.h>
#define int long
#define long long long
const int mod = 1000000007;
const int limit = 100001;
using namespace std;
main(){
    int n,k;cin>>n>>k;
    int a[n];for(int &x:a)cin>>x;
    sort(a,a+n);
    int res = 0;
    for(int i=0,l=0,r=0;i<n;i++){
        //cach 1
        while(r<n && a[i]-a[r]+1 >= -k)r++;
        while(l<n && a[i]-a[l]+1 > k)l++;
        res+=r-l;
        if(l<=i && i<r) res--;

        //cach 2
        // res += upper_bound(a,a+n,k+a[i]-1)-lower_bound(a,a+n,-k+a[i]-1);
        // if(k>0)res--;
    }
    cout<<res;
}