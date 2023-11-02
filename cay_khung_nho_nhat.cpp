#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Định nghĩa cấu trúc biểu diễn cạnh của đồ thị
struct Edge {
    int u, v, weight;
    Edge(int _u, int _v, int _weight) : u(_u), v(_v), weight(_weight) {}
};

// Định nghĩa cấu trúc biểu diễn đồ thị
class Graph {
private:
    int n; // Số đỉnh
    vector<vector<pair<int, int>>> adj; // Danh sách kề

public:
    Graph(int _n) : n(_n) {
        adj.resize(n + 1);
    }

    // Thêm cạnh vào đồ thị
    void addEdge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    // Tìm cây khung nhỏ nhất bằng thuật toán Prim
    int findMinimumSpanningTree() {
        int totalWeight = 0;
        vector<bool> visited(n + 1, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Bắt đầu từ đỉnh 1
        pq.push({0, 1});

        while (!pq.empty()) {
            int u = pq.top().second;
            int weight = pq.top().first;
            pq.pop();

            // Nếu đỉnh này đã được thăm, bỏ qua
            if (visited[u]) continue;

            visited[u] = true;
            totalWeight += weight;

            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int w = neighbor.second;
                if (!visited[v]) {
                    pq.push({w, v});
                }
            }
        }

        return totalWeight;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Graph graph(n);

    for (int i = 0; i < m; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph.addEdge(u, v, weight);
    }

    int minSpanningTreeWeight = graph.findMinimumSpanningTree();

    cout << minSpanningTreeWeight << endl;

    return 0;
}
