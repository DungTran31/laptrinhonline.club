// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int s,f,n,k,m;
// 	cin>>n>>k>>m>>s>>f;
// 	queue<int> Q;  //van hanh cho thuat toan BFS
// 	map<int,int> M;    //do do sau  M[11]=2;  M[4]=3
// 	M[s]=1;
// 	Q.push(s);
// 	while(Q.size())
// 	{
// 		int u=Q.front(); Q.pop();
// 		if(u+k <=n && !M[u+k] ) {M[u+k]=M[u]+1; Q.push(u+k);}
// 		if(u-m >0  && !M[u-m] ) {M[u-m]=M[u]+1; Q.push(u-m);}
// 		if(M[f]) {cout<<M[f]-1; return 0;}
// 	}
// 	cout<<-1;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,f,n,m,k;
	cin>>n>>m>>k>>s>>f;
	queue<int> Q;
	int d[n+5] = {};
	Q.push(s);
	d[s]=1;
	while(Q.size() && d[f]==0){
		int u = Q.front();Q.pop();
		if(u+m<=n && d[u+m] == 0) {
			d[u+m]=d[u]+1;
			Q.push(u+m);
		}
		if(u-k>=1 && d[u-k] == 0) {
			d[u-k]=d[u]+1;
			Q.push(u-k);
		}
		
	}
	cout<<d[f]-1<<" ";		
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m, s, f;
    cin >> n >> k >> m >> s >> f;
    queue<int> Q;
    int d[n + 5] = {};
    Q.push(s); d[s] = 1;
    while (Q.size() > 0) {
        int u = Q.front();
        Q.pop();
        for(int v : {u+k, u - m}) {
            if(1 <= v && v <= n && d[v] == 0) {
                d[v] = d[u] + 1;
                Q.push(v);
            }
        }
    }
    cout << d[f] - 1;
    return 0;

}
*/