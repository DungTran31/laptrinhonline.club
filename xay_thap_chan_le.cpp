#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    long long ans=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        if((a[i]+a[i-1])%2!=0) ans+=a[i-1];
    }
    cout << ans;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	long sum =0;
	cin >> n;
	int a[n];
	for( i=0; i<n; i++ ) cin >> a[i];
	sort ( a, a+n, greater<int>() );
	sum = a[0];
	for( i=0;  i<n-1; i++ ){
		if( a[i] % 2 == 0 && a[i+1] % 2 != 0 || a[i] % 2 != 0 && a[i+1] % 2 == 0  ){
			sum += a[i+1];
		}
	}
	cout << sum;
}
*/