#ifndef FFFF_H
#define FFFF_H

#include <queue>
#include <vector>
#include <functional>

struct EdgeNode {
    int y;          // Указатель на следующую вершину
    EdgeNode* next; // Следующий элемент списка
};

struct Graph {
    std::vector<EdgeNode*> edges; // Список смежности
    bool directed;                // Флаг направленного графа
};

void bfs(Graph* g, int start, std::function<void(int)> process_vertex_early, 
         std::function<void(int, int)> process_edge, std::function<void(int)> process_vertex_late);

#endif
