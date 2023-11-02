#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long x,res=0;
	stack<pair<long long,int> >S;
	S.push({LLONG_MAX,0});
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&x);
		while(S.top().first<x)
		{
			res+=S.top().second;
			S.pop();
		}
		if(S.top().first==x)
		{
			if(S.size()>2) res++;
			res+=S.top().second;
			S.top().second++;
		}
		else
		{
			if(S.size()>1) res++;
			S.push({x,1});
		}
	}
	printf("%lld",res);	
}