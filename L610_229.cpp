//  Делягин Ф.О ПМ-201
#include "graph.h"
#include <iostream>
void dijkstra(graph *g, int start){
   bool intree[MAXV +1];      // Вершина уже в дереве?
    int distance[MAXV +1];    // Расстояние вершины от начала
    int parent[MAXV +1];      // Родительский элемент
    int v = start;            // Текущая вершина
    int w;                    // кандидат на следующую вершину
    int weight;               // Вес ребра
    int dist;                 // наилучшее текущее растояние от начала
    distance[start] = 0;
    for (int i = 1; i <= g->nvertices; i++) {
        intree[i] = false;
        distance[i] = MAXINT;
        parent[i] = -1;
    }

    while (!intree[v]) {
        intree[v] = true;
        edgenode* p = g->edges[v]; // получаем все ребра для вершины v

        //проходимя по всем ребрам из вершины v
        while (p != nullptr) {
            w = p->y;
            weight = p->weight;
            // если растояние от начала до вершины w больше чем сумма расстояния от вершины v и веса ребра, то изменяем расстояние от начала до вершины w
            if (distance[w] > distance[v]+weight) {
                distance[w] = distance[v]+weight; 
                parent[w] = v; // добавляем родительский элемент для w
            }

            p = p->next; // следующее ребро
        }

        v = 1;
        dist = MAXINT; // задаем максимально возможное значение для максимально наилучшего расстояния от начала
        //проходимся по всем вершинам
        for (int i = 1; i <= g->nvertices; i++) {
            //находим максимально наилучшее расстояние от начала 
            if (!intree[i] && dist > distance[i]) {
                dist = distance[i];
                v = i; // изменяем текущую вершину
            }
        }
    }
    
    // находим наилучшие пути от начала для всех вершин
    for (int i = 1; i <= g->nvertices; i++) {
        find_path(start, i, parent);
    }
    
}
int main() {
    graph g;
    read_graph(&g, false);
    int start = 3;
    dijkstra(&g, start);

    return 0;
}