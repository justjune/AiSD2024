#include "ffff.h"
#include <iostream>
#include <vector>
#include <queue>

void bfs(Graph* g, int start, std::function<void(int)> process_vertex_early, 
         std::function<void(int, int)> process_edge, std::function<void(int)> process_vertex_late) {
    std::vector<bool> discovered(g->edges.size(), false); // Список посещённых вершин
    std::vector<bool> processed(g->edges.size(), false);  // Список обработанных вершин
    std::vector<int> parent(g->edges.size(), -1);         // Родительские вершины

    std::queue<int> q;
    q.push(start);
    discovered[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        // Ранний процессинг вершины
        process_vertex_early(v);
        processed[v] = true;

        EdgeNode* p = g->edges[v];
        while (p != nullptr) {
            int y = p->y;

            // Обрабатываем ребро
            if ((!processed[y] || g->directed)) {
                process_edge(v, y);
            }

            if (!discovered[y]) {
                q.push(y);
                discovered[y] = true;
                parent[y] = v;
            }
            p = p->next;
        }
        // Поздний процессинг вершины
        process_vertex_late(v);
    }
}
