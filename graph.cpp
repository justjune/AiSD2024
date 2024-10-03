
#include "graph.h"
#include <iostream>

void print_graph(graph *g) {
    for (int i = 1; i <= g->nvertices; i++) {
        std::cout << i << ": ";
        edgenode *p = g->edges[i];
        while (p != nullptr) {
            std::cout << ' ' << p->y;
            p = p->next;
        }
        std::cout << std::endl;
    }
}

void initialize_graph(graph *g, bool directed) {
    g->nvertices = 0;
    g->nedges = 0;
    g->directed = directed;
    for (int i = 1; i <= MAXV; i++) {
        g->degree[i] = 0;
        g->edges[i] = nullptr;
    }
}

void insert_edge(graph *g, int x, int y, int w, bool directed) {
    if (x < 1 || x > g->nvertices || y < 1 || y > g->nvertices) {
        std::cout << "Ошибка: Вершины вне диапазона." << std::endl;
        return;
    }

    edgenode *p = new edgenode;  // Выделяем память для нового ребра
    p->weight = w;               // Устанавливаем вес
    p->y = y;
    p->next = g->edges[x];
    g->edges[x] = p;  
    g->degree[x]++;

    if (!directed) {
        insert_edge(g, y, x, w, true);
    } else {
        g->nedges++;
    }
}

void read_graph(graph *g, bool directed) {
    int m;  // Количество ребер
    int x, y;  // Вершины между ребром
    int w; // Вес ребра
    initialize_graph(g, directed);
    std::cin >> g->nvertices >> m;

    for (int i = 0; i < m; i++) {
        std::cin >> x >> y >> w;
        insert_edge(g, x, y, w, directed);
    }
}
void find_path(int start, int end, int parents[])
{
	if ((start == end) || (end == -1))
		std::cout << "\n"<< start;
	else {
		find_path(start,parents[end],parents);
		std::cout << " "<< end;
	}
}

void delete_edge(graph *g, int x, int y, bool directed) {
    edgenode *p = g->edges[x];
    edgenode *p_back = nullptr;

    while (p != nullptr) {
        if (p->y == y) {
            g->degree[x]--;
            if (p_back != nullptr) {
                p_back->next = p->next;
            } else {
                g->edges[x] = p->next;
            }
            delete p;  // Освобождаем память
            if (!directed) {
                delete_edge(g, y, x, true);
            } else {
                g->nedges--;
            }
            return;
        } else {
            p_back = p;
            p = p->next;
        }
    }
    std::cout << "Не найдена вершина между точками (" << x << ',' << y << ')' << std::endl;
}
