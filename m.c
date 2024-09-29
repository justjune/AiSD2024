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
	vector<int> distance(g->nvertices + 1, INT_MAX);   // Стоимость добавления
	vector<int> parent(g->nvertices + 1, -1);          // Родитель вершины
	int v = start;
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
}

int main() {
	// Пример использования алгоритма Прима
	Graph g;
	g.nvertices = 5;
	g.edges.resize(g.nvertices + 1, nullptr);

	// Добавьте ребра в граф

	int start = 1; // Начальная вершина
	prim(&g, start);

	return 0;
}
