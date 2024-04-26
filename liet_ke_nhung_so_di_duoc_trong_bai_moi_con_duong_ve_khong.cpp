#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,bool> M;
	int n;
	cin>>n;
	stack<int> S; 
	S.push(n); 
	M[n]=true;
	while(S.size())
	{
		int u=S.top(); S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(!M[v])
			{
				M[v]=true;
				S.push(v);
			}			
		}
	}
	for(auto x:M) cout<<x.first<<" ";
}