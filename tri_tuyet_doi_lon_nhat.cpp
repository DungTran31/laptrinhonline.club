#include <iostream>
#include <algorithm>
using namespace std;
#define int long
#define long long long

main(){
    int n;cin>>n;
    int a[n]; 
    for(int &x:a) cin>>x;
    sort(a,a+n);
    cout<< max(abs(a[0]+a[1]),abs(a[n-1]+a[n-2]));
}