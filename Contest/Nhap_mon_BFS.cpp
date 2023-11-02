#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

#define MAXN 1005

// lưu quy luật mà quân mã có thể đi 
// (dx âm là đi lên dương là đi xuống)
// (dy âm là đi sang trái dương là đi sang phải)
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};


//để lưu trạng thái đã thăm của các ô trên bàn cờ. Nếu = true là đã thăm
bool visited[MAXN][MAXN];
//để lưu khoảng cách từ điểm đầu đến điểm đó. 
//Nếu dist[i][j] = k, ô (i, j) có thể được đi tới bằng k bước đi từ điểm đầu. 
int dist[MAXN][MAXN]; 

int bfs(int x1, int y1, int x2, int y2, int m, int n) {
    memset(visited, false, sizeof(visited)); //gán tất cả ptu trong visited thành false
    memset(dist, 0, sizeof(dist)); // gán tất cả ptu trong dist thành 0

    queue<pair<int, int> > q;
    visited[x1][y1] = true;
    q.push(make_pair(x1, y1));

    while (!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();

        if (u.first == x2 && u.second == y2) return dist[x2][y2];

        for (int i = 0; i < 8; i++) {
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            // Nếu ô đó nằm trong bàn cờ (tức x và y lớn hơn hoặc bằng 1 và nhỏ hơn hoặc bằng m và n) 
            // và chưa được ghé thăm (tức visited[x][y] bằng false), chương trình đánh dấu ô đó đã 
            // được ghé thăm (visited[x][y] = true)
            if (x >= 1 && x <= m && y >= 1 && y <= n && !visited[x][y]) {
                visited[x][y] = true;
                dist[x][y] = dist[u.first][u.second] + 1;
                q.push(make_pair(x, y));
            }
        }
    }

    return -1;
}

int main() {
    int m, n, x1, y1, x2, y2;
    cin >> m >> n >> x1 >> y1 >> x2 >> y2;
    cout << bfs(x1, y1, x2, y2, m, n) << endl;
    return 0;
}
