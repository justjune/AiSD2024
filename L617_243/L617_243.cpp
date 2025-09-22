//Ткаченко Илья ПМ-201
#include "../graph.hpp"
#include <iostream>

// Функция для нахождения ребра между двумя вершинами x и y в графе
edgenode* find_edge(graph* g, int x, int y) {
    edgenode* p = g->edges[x]; // Берем список ребер для вершины x
    while (p != nullptr) {     // Проходим по всем ребрам вершины x
        if (p->y == y) {       // Если конечная вершина совпадает с y
            return p;          // Возвращаем указатель на это ребро
        }
        p = p->next;           // Переходим к следующему ребру
    }
    return nullptr;            // Если ребро не найдено, возвращаем nullptr
}

// Рекурсивная функция для модификации ребер на пути
void augment_path(graph* g, int start, int end, int parents[], int volume) {
    edgenode* e; // Указатель на текущее ребро

    if (start == end) return; // Если достигли начальной вершины, завершаем рекурсию

    // Находим ребро от родителя к текущей вершине
    e = find_edge(g, parents[end], end);
    if (e != nullptr) {
        e->weight += volume; // Увеличиваем вес ребра на значение объема
    }

    // Находим обратное ребро (для остаточного потока)
    e = find_edge(g, end, parents[end]);
    if (e != nullptr) {
        e->weight -= volume; // Уменьшаем вес обратного ребра на значение объема
    }

    // Рекурсивно вызываем функцию для родительской вершины
    augment_path(g, start, parents[end], parents, volume);
}
