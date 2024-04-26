import heapq

class Graph:
    def __init__(self, n):
        self.n = n
        self.adj = [[] for _ in range(n + 1)]

    def add_edge(self, u, v, weight):
        self.adj[u].append((v, weight))
        self.adj[v].append((u, weight))

    def find_minimum_spanning_tree(self):
        total_weight = 0
        visited = [False] * (self.n + 1)
        pq = [(0, 1)]

        while pq:
            weight, u = heapq.heappop(pq)

            if visited[u]:
                continue

            visited[u] = True
            total_weight += weight

            for neighbor in self.adj[u]:
                v, w = neighbor
                if not visited[v]:
                    heapq.heappush(pq, (w, v))

        return total_weight

if __name__ == "__main__":
    n, m = map(int, input().split())

    graph = Graph(n)

    for _ in range(m):
        u, v, weight = map(int, input().split())
        graph.add_edge(u, v, weight)

    min_spanning_tree_weight = graph.find_minimum_spanning_tree()

    print(min_spanning_tree_weight)
