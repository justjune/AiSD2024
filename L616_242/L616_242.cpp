//Добавление увеливающих путей в поток
//Поздин Константин Федорович Пм-201
#include <iostream>
#include <algorithm> // Для std::min
#include <queue>
#include <vector>
#include <climits>

#include "L616_242.hpp"


int parents[MAXV+1];

void add_edge(flow_graph* g, int x, int y, int capacity) {
    // Создаем и добавляем прямое ребро x → y
    edgenode* new_edge_forward = new edgenode;
    new_edge_forward->v = y;
    new_edge_forward->residual = capacity;
    new_edge_forward->next = g->edges[x];
    g->edges[x] = new_edge_forward;
    
    // Создаем и добавляем обратное ребро y → x
    edgenode* new_edge_backward = new edgenode;
    new_edge_backward->v = x;
    new_edge_backward->residual = 0;
    new_edge_backward->next = g->edges[y];
    g->edges[y] = new_edge_backward;
}

void init_flow_graph(flow_graph *g ,int n) {
    g->edges = new edgenode*[n](); // Инициализируем нулями (nullptr)
}

// Функция поиска ребра между вершинами x и y
edgenode* find_edge(flow_graph* g, int x, int y) {
    edgenode* p = g->edges[x]; // Инициализируем временный указатель для обхода списка смежности вершины x
    while (p != nullptr) {     // Пока не достигнут конец списка
        if (p->v == y) return p; // Если конечная вершина ребра равна y, возвращаем указатель на это ребро
        p = p->next;            // Переходим к следующему ребру в списке
    }
    return nullptr;             // Если ребро не найдено, возвращаем nullptr
}

bool bfs(flow_graph* g, int n, int start, int end) {
    // Инициализируем массив родителей и посещенных вершин
    for (int i = 0; i < n; i++) {
        parents[i] = -1;
    }
    
    // Создаем очередь для BFS
    std::queue<int> q;
    q.push(start);
    parents[start] = -2; // Помечаем стартовую вершину специальным значением
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        // Обходим все смежные вершины
        edgenode* p = g->edges[u];
        while (p != nullptr) {
            int v = p->v;
            
            // Если вершина еще не посещена и остаточная пропускная способность > 0
            if (parents[v] == -1 && p->residual > 0) {
                parents[v] = u; // Запоминаем родителя
                
                // Если достигли стока, завершаем BFS
                if (v == end) {
                    return true;
                }
                
                q.push(v);
            }
            p = p->next;
        }
    }
    
    // Сток не достижим из истока
    return false;
}

// Рекурсивная функция для вычисления объема пути
int path_volume(flow_graph* g, int start, int end) {
    if (parents[end] == -1) return 0; // Если путь не существует, возвращаем 0

    edgenode* e = find_edge(g, parents[end], end); // Находим ребро между вершинами parents[end] и end

    if (start == parents[end]) {  // Базовый случай: если начальная вершина равна родительской вершине end
        return e->residual;       // Возвращаем остаточную емкость этого ребра
    }
    else {
        // Рекурсивный вызов для поиска минимальной остаточной емкости на пути
        return std::min(path_volume(g, start, parents[end]), e->residual);
    }
}
