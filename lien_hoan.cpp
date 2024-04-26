#include<bits/stdc++.h>
using namespace std;
unordered_map<int,unordered_map<int,int>>check;
unordered_map<int,int>dr;
unordered_map<int,vector<int>>mp;
void dfs(int x,int i)
{
    if(dr.find(x) != dr.end()) return;
    check[i][x] = 1;
    dr[x] = 1;
    for(auto k : mp[x])
    {
        dfs(k,i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k,n,m;
    cin >> k >> n >> m;
    vector<int>v(k);
    for(auto &x : v) cin >> x;

    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin >> u >> v;
        mp[u].push_back(v);
    }
    for(auto x : v)
    {
        dr.clear();
        dfs(x,x);
    }
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        bool isValid = true;
        for(auto x : v)
        {
            if(check[x].find(i) == check[x].end())
            {
                isValid = false;
                break;

            }
        }
        if(isValid ) res++;
    }
    cout << res;




}