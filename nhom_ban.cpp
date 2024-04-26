#include<bits/stdc++.h>
using namespace std;
class Group
{
    int n, m, d[100005] = {}; //d[i]: đánh dấu xem người i đã được duyệt chưa
    int k = 0, res = 0; // k: số khu vực, res: số người của khu vực đông nhất
    vector <int> A[100005]; //A[i]: danh sách những người quen với i
    public:
        void sol()
        {
            cin >> n >> m;
            for(int i = 1; i <= m; i++)
            {
                int u, v;
                cin >> u >> v;


                // u quen v và v cũng quen u
                A[u].push_back(v);
                A[v].push_back(u);
            }


            for(int i = 1; i <= n; i++)
                if(d[i] == 0)
                {
                    k++;
                    int z = BFS(i);  
                    if(res < z) res = z;
                }
            cout << k << "\n" << res;
        }


        //Tìm tất cả những người quen của s và trả về số người của nhóm đó
        int BFS(int s)
        {
            int dem = 1;
            queue <int> S;


            // đánh dấu người s đã duyệt rồi
            d[s] = 1;
            S.push(s);


            while(S.size())
            {
                int u = S.front(); S.pop();


                // Duyệt danh sách những người quen của u
                for(int v : A[u])


                // Nếu người v chưa được duyệt
                if(d[v] == 0)
                {
                    // Đánh dấu người v đã duyệt rồi
                    d[v] = 1;
                    dem++;


                    // Đưa vào hàng đợi để sau này duyệt tiếp
                    S.push(v);
                }
            }
            return dem;
        }
};
int main()
{
    Group G;
    G.sol();
}

