#include "graph.h"
#include <iostream>
void prim(graph *g, int start) {
    bool intree[MAXV +1];      // Вершина
    int distance[MAXV +1];
    int parent[MAXV +1];
    int v = start;                                     // Текущая вершина
    int dist, w, weight;

    distance[start] = 0;
    for (int i = 1; i <= g->nvertices; i++) {
        intree[i] = false;
        distance[i] = MAXINT;
        parent[i] = -1;
    }
    while (!intree[v]) {
        intree[v] = true;
        edgenode* p = g->edges[v];

        while (p != nullptr) {
            w = p->y;
            weight = p->weight;

            if (distance[w] > weight && !intree[w]) {
                distance[w] = weight;
                parent[w] = v;
            }

            p = p->next;
        }

        v = 1;
        dist = MAXINT;

        for (int i = 1; i <= g->nvertices; i++) {
            if (!intree[i] && dist > distance[i]) {
                dist = distance[i];
                v = i;
            }
        }
    }
    
    for (int i = 1; i <= g->nvertices; i++) {
        find_path(1, i, parent);
    }
}

int main() {
    graph g;
    // g.nvertices = 5;
    // g.edges.resize(g.nvertices + 1, nullptr);


    // // Вершина 1
    // g.edges[1] = new Edge{2, 10, nullptr};
    // g.edges[1] = new Edge{3, 5, g.edges[1]};

    // // Вершина 2
    // g.edges[2] = new Edge{1, 10, nullptr};
    // g.edges[2] = new Edge{4, 1, g.edges[2]};

    // // Вершина 3
    // g.edges[3] = new Edge{1, 5, nullptr};
    // g.edges[3] = new Edge{4, 7, g.edges[3]};

    // // Вершина 4
    // g.edges[4] = new Edge{2, 1, nullptr};
    // g.edges[4] = new Edge{3, 7, g.edges[4]};
    // g.edges[4] = new Edge{5, 2, g.edges[4]};

    // // Вершина 5
    // g.edges[5] = new Edge{4, 2, nullptr};
    read_graph(&g, false);
    int start = 1;
    prim(&g, start);

    return 0;
}
