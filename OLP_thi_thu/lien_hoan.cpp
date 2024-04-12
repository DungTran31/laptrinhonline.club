#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// bt: tim so diem hop mat thoa man sao cho co k ng n dinh m canh do thi 1 chieu (k nguoi do deu co duong di den 1 dinh goi la tu hop)
// 2 4 4
// 2
// 3
// 1 2
// 1 4
// 2 3
// 3 4
// ==>
// 2

int k, n, m, d[10005];
vector<int> adj[10005];
bool used[10005];

void dfs(int u){
   d[u]++;
   used[u] = true;
   for(int v : adj[u]){
      if(!used[v]){
         dfs(v);
      }
   }
}

int main(){
    cin >> k >> n >> m;
    int nguoi[k];
    for(int &x : nguoi) cin >> x;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int x : nguoi){
        memset(used, false, sizeof(used));
        dfs(x);
    }
    int res = 0; // di dem so diem tu hop thoa man
    for(int i = 1; i <= n; i++){
        if(d[i] == k){
            //in ra cac dia diem thoa man
            // cout << i << " ";
            res++;
        }
    }
    // cout << endl;
    cout << res;
}