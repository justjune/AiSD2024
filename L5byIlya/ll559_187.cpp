//Ткаченко Илья ПМ-201
#include <iostream>
#include "ffff.h"

// Ранний процессинг вершины
void process_vertex_early(int v) {
    std::cout << "Processing the vertex (early processing): " << v << std::endl;
}

// Обработка ребра
void process_edge(int v, int y) {
    std::cout << "Processing the edge (" << v << " -> " << y << ")" << std::endl;
}

// Поздний процессинг вершины
void process_vertex_late(int v) {
    std::cout << "Processing the vertex (late processing): " << v << std::endl;
}

int main() {
    // Создаем граф
    Graph g;
    g.directed = false; // Ненаправленный граф
    g.edges.resize(5);  // Граф с 5 вершинами

    // Добавляем рёбра (пример)
    EdgeNode* edge1 = new EdgeNode{1, nullptr};
    EdgeNode* edge2 = new EdgeNode{2, nullptr};
    EdgeNode* edge3 = new EdgeNode{3, nullptr};
    g.edges[0] = edge1; edge1->next = edge2; edge2->next = edge3;

    EdgeNode* edge4 = new EdgeNode{4, nullptr};
    g.edges[1] = edge4;

    // Запуск BFS
    std::cout << "Starting the breadth-first traversal (BFS):" << std::endl;
    bfs(&g, 0, process_vertex_early, process_edge, process_vertex_late);

    // Освобождаем память
    for (auto edgeList : g.edges) {
        while (edgeList != nullptr) {
            EdgeNode* temp = edgeList;
            edgeList = edgeList->next;
            delete temp;
        }
    }

    return 0;
}
