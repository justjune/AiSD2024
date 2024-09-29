#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int vertex;
    int weight;
    Edge* next;
};

struct Graph {
    int nvertices;
    vector<Edge*> edges;
};

void prim(Graph* g, int start) {
    vector<bool> intree(g->nvertices + 1, false);      // Вершина
    vector<int> distance(g->nvertices + 1, INT_MAX);
    vector<int> parent(g->nvertices + 1, -1);
    int v = start;                                     // Текущая вершина
    int dist, w, weight;

    distance[start] = 0;

    while (!intree[v]) {
        intree[v] = true;
        Edge* p = g->edges[v];

        while (p != nullptr) {
            w = p->vertex;
            weight = p->weight;

            if (distance[w] > weight && !intree[w]) {
                distance[w] = weight;
                parent[w] = v;
            }

            p = p->next;
        }

        v = 1;
        dist = INT_MAX;

        for (int i = 1; i <= g->nvertices; i++) {
            if (!intree[i] && dist > distance[i]) {
                dist = distance[i];
                v = i;
            }
        }
    }

    // Вывод дерева
    cout << "Minimum spanning tree (edge: weight):" << endl;
    for (int i = 1; i <= g->nvertices; i++) {
        if (parent[i] != -1) {
            cout << parent[i] << " - " << i << ": " << distance[i] << endl;
        }
    }
}

int main() {
    Graph g;
    g.nvertices = 5;
    g.edges.resize(g.nvertices + 1, nullptr);


    // Вершина 1
    g.edges[1] = new Edge{2, 10, nullptr};
    g.edges[1] = new Edge{3, 5, g.edges[1]};

    // Вершина 2
    g.edges[2] = new Edge{1, 10, nullptr};
    g.edges[2] = new Edge{4, 1, g.edges[2]};

    // Вершина 3
    g.edges[3] = new Edge{1, 5, nullptr};
    g.edges[3] = new Edge{4, 7, g.edges[3]};

    // Вершина 4
    g.edges[4] = new Edge{2, 1, nullptr};
    g.edges[4] = new Edge{3, 7, g.edges[4]};
    g.edges[4] = new Edge{5, 2, g.edges[4]};

    // Вершина 5
    g.edges[5] = new Edge{4, 2, nullptr};

    int start = 1;
    prim(&g, start);

    return 0;
}
