#include <iostream>
#include "../graph.h"

// Функции для обработки вершин и рёбер
void process_vertex_early(int v) {
    std::cout << "Обработка вершины " << v << " на этапе раннего обхода\n";
}

void process_vertex_late(int v) {
    std::cout << "Обработка вершины " << v << " на этапе позднего обхода\n";
}

void process_edge(int v, int y) {
    std::cout << "Обработка ребра (" << v << ", " << y << ")\n";
}
// Инициализация поиска
void initialize_search(graph *g) {
    for (int i = 1; i <= g->nvertices; i++) {
        processed[i] = discovered[i] = false;
        parent[i] = -1;
    }
}

// Объявляем массивы для отслеживания состояния вершин
bool processed[MAXV + 1];    // Отмечает, обработана ли вершина
bool discovered[MAXV + 1];   // Отмечает, обнаружена ли вершина
int parent[MAXV + 1];        // Родительская вершина для каждой вершины
int entry_time[MAXV + 1];    //Время входа в вершину
int exit_time[MAXV + 1];     //Время выхода из вершины
int time = 0;                // Счетчик времени
bool finished = false;

void dfs(graph *g, int v) {
    edgenode *p; // Временный указатель для обхода рёбер           
    int y;       // Смежная (следующая) вершина

    if (finished) {
        return; 
    }

    discovered[v] = true;     // Помечаем стартовую вершину как обнаруженную
    time = time + 1;          // Прибавлем время
    entry_time[v] = time;     // Записываем время захода в вершину

    process_vertex_early(v);

    p = g->edges[v];
    while (p != nullptr) {
        y = p->y;
        if (discovered[y] == false) {
            parent[y] = v;
            process_edge(v, y);
            dfs(g, y);
        } else if ((!processed[y]) || (g->directed)) {
            process_edge(v, y);
        }

        if (finished) {
            return;
        }

        p = p->next;
    }

    process_vertex_late(v);

    time = time + 1;
    exit_time[v] = time;

    processed[v] = true;
}

int main()
{
	graph g;

	read_graph(&g,false);
	print_graph(&g);

	initialize_search(&g);
	dfs(&g,1);

    for (int i=1; i<=g.nvertices; i++)
        find_path(1,i,parent);
    std::cout << '\n';

}
