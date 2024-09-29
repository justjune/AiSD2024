#include <iostream>
#include <vector>
#include <algorithm>

    // представление ребра
struct Edge {
    int x, y, weight;
};

//
struct SetUnion {
    std::vector<int> parent, rank;

    SetUnion(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u != parent[u]) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void union_sets(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] < rank[rootV]) {
                std::swap(rootU, rootV);
            }
            parent[rootV] = rootU;
            if (rank[rootU] == rank[rootV]) {
                ++rank[rootU];
            }
        }
    }

    bool same_component(int u, int v) {
        return find(u) == find(v);
    }
};

//сортировка ребер по весу
bool weight_compare(const Edge &a, const Edge &b) {
    return a.weight < b.weight;
}

void kruskal(int nvertices, std::vector<Edge> &edges) {
    SetUnion s(nvertices);

    // Сортируем ребра
    std::sort(edges.begin(), edges.end(), weight_compare);


    for (const auto &e : edges) {
        if (!s.same_component(e.x, e.y)) {
            std::cout << "Edge (" << e.x << ", " << e.y << ") in MST\n";
            s.union_sets(e.x, e.y);
        }
    }
}

int main() {
    int nvertices = 5;  // Пример: количество вершин
    std::vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskal(nvertices, edges);

    return 0;
}
