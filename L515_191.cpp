#include <iostream>
#include <vector>
#include <queue>

#define UNCOLORED 0
#define WHITE 1
#define BLACK 2

struct graph {
    int nvertices;                      // Число вершин в графе
    std::vector<std::vector<int>> edges; // Список смежности для хранения графа
};

std::vector<int> color;                 // Цвета вершин
std::vector<bool> discovered;           // Метка для отслеживания посещения вершины
bool bipartite;                         // Флаг для проверки двудольности графа

void initialize_search(const graph &g) {
    color.assign(g.nvertices + 1, UNCOLORED);
    discovered.assign(g.nvertices + 1, false);
}

void process_edge(int x, int y) {
    if (color[x] == color[y]) {
        bipartite = false;
        std::cout << "Warning: not bipartite due to (" << x << ", " << y << ")\n";
    }
    color[y] = (color[x] == WHITE) ? BLACK : WHITE;
}

void bfs(const graph &g, int start) {
    std::queue<int> q;
    q.push(start);
    discovered[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int neighbor : g.edges[v]) {
            if (!discovered[neighbor]) {
                discovered[neighbor] = true;
                process_edge(v, neighbor);
                q.push(neighbor);
            } else {
                process_edge(v, neighbor);
            }
        }
    }
}

void twocolor(graph *g) {
    // Счетчик
    for (int i = 1; i <= g->nvertices; i++) {
        color[i] = UNCOLORED;
    }

    bipartite = true;
    initialize_search(*g);

    for (int i = 1; i <= g->nvertices; i++) {
        if (!discovered[i]) {
            color[i] = WHITE;
            bfs(*g, i);
        }
    }
}

int main() {
    graph g;
    g.nvertices = 5;
    g.edges = {
        {},             // 0-я вершина (не используется)
        {2, 3},         // 1-я вершина соединена с 2 и 3
        {1, 4},         // 2-я вершина соединена с 1 и 4
        {1, 5},         // 3-я вершина соединена с 1 и 5
        {2},            // 4-я вершина соединена с 2
        {3}             // 5-я вершина соединена с 3
    };

    twocolor(&g);

    if (bipartite) {
        std::cout << "Graph is bipartite.\n";
    } else {
        std::cout << "Graph is not bipartite.\n";
    }

    return 0;
}
