#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[25],ans = INT_MAX;
void Quaylui(int con1, int con2, int i) {
    if (i == n) {
        ans = min(ans, abs(con1 - con2));
        return;
    }
    Quaylui(con1 + a[i], con2, i + 1);
    Quaylui(con1, con2 + a[i], i + 1);
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    Quaylui(0, 0, 0);
    cout << ans;
}

/*
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,sum=0;
int a[100];
int backtrack(int nguoi1,int step){
	if(step==n)return abs(sum - nguoi1 - nguoi1);
	return min(backtrack(nguoi1+a[step],step+1),backtrack(nguoi1,step+1));
}
main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];sum+=a[i];
	}
	cout<<backtrack(0,0);
}
*/