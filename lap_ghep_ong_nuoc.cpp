#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;


main(){
	long res=0;
	int n,k;cin>>n>>k;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	//cho cac thanh ong nuoc vao hang doi uu tien
	priority_queue<int,vector<int>,greater<int>>pq;
	for(int i=0;i<n;i++){
		pq.push(a[i]);
	}
	//cho den khi con ong nuoc de noi
	while(pq.size()>1){
		int temp = 0;
		for(int i=0;i<k&&!pq.empty();i++){
			temp+=pq.top();pq.pop();
		}
		res+=temp;
		pq.push(temp);
	}
	cout<<res;
}