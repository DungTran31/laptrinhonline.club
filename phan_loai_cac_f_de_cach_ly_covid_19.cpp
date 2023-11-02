/*Ý tưởng:tạo 1 mảng các vector trong đó vector chứa những người đã tiếp xúc với đối tượng mảng chứa
tạo 2 mảng d,F chứa số k vd:d[x]=2 thì x bị F2
tạo queue Q chứa số lượng người bị covid và các F
nếu ai có tiếp xúc với F thì push vào Q để xét tiếp và tăng số F đang xét +1*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, u, v;
    cin >> n >> m;
    vector<int> A[n+5];  //Mang cac vector
    while(m--){
        cin >> u >> v;
        A[u].push_back(v);  
        A[v].push_back(u);
    }
    int d[n + 5]; fill(d,d+n+1,-1);  //d[x]=k thi x la F[k]
    int F[n + 5] = {};                 //so F[i] ban dau toan 0
    queue<int> Q;
    cin >> F[0];
    for(int i = 1; i <= F[0]; i++){
        cin>>x;
        Q.push(x);
        d[x] = 0;
    }


    while(Q.size()){
        int u = Q.front(); Q.pop();
        for(int v : A[u])
            if(d[v] == -1)
            {
                d[v] = d[u]+1;
                Q.push(v);
                F[d[v]]++;
            }
    }
    for(int i = 0; F[i] != 0; i++)
        cout << "F" << i << ": " << F[i] << "\n";
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, u, v, x;
    cin >> n >> m;
    int F[n + 5] = {0};
    int d[n + 5];
    memset(d, -1, sizeof(d));
    vector<int> a[n + 5];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    queue<int> q;
    cin >> F[0];
    for (int i = 0; i < F[0]; i++)
    {
        cin >> x;
        q.push(x);
        d[x] = 0; // danh dau la dinh
    }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int x : a[v])
        {
            if (d[x] == -1)
            { // chua duoc den tham
                q.push(x);
                d[x] = d[v] + 1; // tang the he F
                F[d[x]]++;
            }
        }
    }
    for (int i = 0; F[i] != 0; i++)
    {
        cout << "F" << i << ": " << F[i] << endl;
    }
}
*/