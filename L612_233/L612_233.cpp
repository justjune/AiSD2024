//Ткаченко Илья ПМ-201
#include "../graph.hpp"
#include <iostream>
#include <vector>


// Реализация алгоритма Флойда-Уоршелла
void floyd_warshall(graph *g) {
    // Создаем матрицу расстояний и заполняем ее значениями MAXINT (бесконечность)
    std::vector<std::vector<int>> dist(g->nvertices + 1, std::vector<int>(g->nvertices + 1, MAXINT));

    // Инициализируем матрицу расстояний значениями весов ребер
    for (int i = 1; i <= g->nvertices; i++) {
        dist[i][i] = 0; // Расстояние до самой себя равно 0
        edgenode *p = g->edges[i];
        while (p != nullptr) {
            dist[i][p->y] = p->weight;
            p = p->next;
        }
    }

    // Основной цикл алгоритма
    for (int k = 1; k <= g->nvertices; k++) {
        for (int i = 1; i <= g->nvertices; i++) {
            for (int j = 1; j <= g->nvertices; j++) {
                if (dist[i][k] < MAXINT && dist[k][j] < MAXINT) {
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Выводим матрицу расстояний
    std::cout << "Shortest distances between vertices:\n";
    for (int i = 1; i <= g->nvertices; i++) {
        for (int j = 1; j <= g->nvertices; j++) {
            if (dist[i][j] == MAXINT)
                std::cout << "INF ";
            else
                std::cout << dist[i][j] << " ";
        }
        std::cout << "\n";
    }
}

