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
    int k; cin >> k;
    vector<vector<long>> c(40, vector<long> (40,0));
    c[0][0]=1;
    for (int i = 1; i < 40; i++)
    {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            c[i][j] += c[i-1][j];
            c[i][j] += c[i-1][j-1];
        }
    }
    if(pow(2, __lg(k))==k){
        int f = __lg(k);
        long ans = 0;
        for (int i = 0; i <= f; i++)
        {
            ans += c[f][i];
        }
        cout << ans << endl;
    }else {
        cout << "0\n";
    }

    return 0;
}


/*
int check1(long long k){
	if( k%2==0) return 1;
	return 0; 
} 
int check2(long long k){
	for( int i=2 ; i<=k ; i*=2){
		if( i==k) return i;
	}
	return 0;
}
int main(){
	long long k;
	scanf( " %lld", &k);
	if( check1(k)&&check2(k)) printf( " \n %lld", k);
	else printf( " \n 0");
	 
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=log2(n);
    if(pow(2,k)!=n)
        cout<<0;
    else
        cout<<n;
}

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    float a=log2(n);
    if(ceil(a)==a) printf("%d",n);
    else printf("0");
}

#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n,d=0;cin>> n;
for (int i = 1; pow(2,i) <= n; i++)
{
	if(pow(2,i)==n) {cout << n;d++;break;}
}
if(d==0) cout << 0;
return 0;
}

#include <stdio.h>
#include <math.h>

int solve(long long n) {
    return (n & (n - 1)) ? 0 : pow(2, (int)(log(n) / log(2)));
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%d", solve(n));
    return 0;
}
*/
