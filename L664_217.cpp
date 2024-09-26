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
    vector<bool> intree(g->nvertices + 1, false);      // Вершина уже в дереве?
    vector<int> distance(g->nvertices + 1, INT_MAX);   // Стоимость добавления к дереву
    vector<int> parent(g->nvertices + 1, -1);          // Родитель вершины в дереве
    int v = start;                                     // Текущая вершина для обработки
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

    // Вывод минимального остовного дерева
    cout << "Минимальное остовное дерево (ребро: вес):" << endl;
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

    // Пример добавления рёбер в граф
    // Вершина 1
    g.edges[1] = new Edge{2, 10, nullptr}; // 1 -> 2 вес 10
    g.edges[1] = new Edge{3, 5, g.edges[1]}; // 1 -> 3 вес 5

    // Вершина 2
    g.edges[2] = new Edge{1, 10, nullptr}; // 2 -> 1 вес 10
    g.edges[2] = new Edge{4, 1, g.edges[2]}; // 2 -> 4 вес 1

    // Вершина 3
    g.edges[3] = new Edge{1, 5, nullptr}; // 3 -> 1 вес 5
    g.edges[3] = new Edge{4, 7, g.edges[3]}; // 3 -> 4 вес 7

    // Вершина 4
    g.edges[4] = new Edge{2, 1, nullptr}; // 4 -> 2 вес 1
    g.edges[4] = new Edge{3, 7, g.edges[4]}; // 4 -> 3 вес 7
    g.edges[4] = new Edge{5, 2, g.edges[4]}; // 4 -> 5 вес 2

    // Вершина 5
    g.edges[5] = new Edge{4, 2, nullptr}; // 5 -> 4 вес 2

    int start = 1; // Начальная вершина
    prim(&g, start);

    return 0;
}
