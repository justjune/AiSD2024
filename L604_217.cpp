// Садрисламов Реваль ПМ-201

#include "graph.h"
#include <iostream>

// Реализация алгоритма Прима для поиска минимального остовного дерева (MST)
void prim(graph *g, int start) {
    bool intree[MAXV + 1];      // Массив, определяющий, включена ли вершина в дерево
    int distance[MAXV + 1];      // Массив для хранения минимального расстояния до вершины
    int parent[MAXV + 1];        // Массив для хранения родительской вершины
    int v = start;               // Текущая вершина
    int dist, w, weight;

    distance[start] = 0;         // Начальная вершина имеет расстояние 0
    for (int i = 1; i <= g->nvertices; i++) {
        intree[i] = false;       // Изначально все вершины не в дереве
        distance[i] = MAXINT;    // Изначально расстояние до всех вершин бесконечно
        parent[i] = -1;          // Родитель каждой вершины не определен
    }

    // Основной цикл алгоритма Прима
    while (!intree[v]) {
        intree[v] = true;  // Включаем текущую вершину в дерево
        edgenode* p = g->edges[v];  // Смотрим на соседей текущей вершины

        // Проходим по всем этим соседям текущей вершины
        while (p != nullptr) {
            w = p->y;        // Вершина-сосед
            weight = p->weight;  // Вес ребра

            // Если найдено более короткое ребро, обновляем расстояние и родителя
            if (distance[w] > weight && !intree[w]) {
                distance[w] = weight;
                parent[w] = v;
            }

            p = p->next;  // Переходим к следующему соседу
        }

        // Переходим к вершине с минимальным расстоянием
        v = 1;
        dist = MAXINT;

        for (int i = 1; i <= g->nvertices; i++) {
            // Находим вершину с минимальным расстоянием, которая еще не в дереве
            if (!intree[i] && dist > distance[i]) {
                dist = distance[i];
                v = i;
            }
        }
    }

    // Выводим минимальные пути для каждой вершины
    for (int i = 1; i <= g->nvertices; i++) {
        find_path(1, i, parent);  // Функция для нахождения пути от начальной вершины до вершины i
    }
}

int main() {
    graph g;

    // Закомментированный код для ручного ввода графа 
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

    // Чтение графа из внешнего источника (например, файла)
    read_graph(&g, false);  // Чтениe графа
    int start = 1;  // Начальная вершина 
    prim(&g, start);  // Запуск 

    return 0;  
}
