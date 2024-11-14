//Добавление увеливающих путей в поток
#include <iostream>
#include <algorithm> // Для std::min

struct edgenode {
    int v;              // Конечная вершина ребра
    int residual;       // Остаточная пропускная способность
    edgenode* next;     // Указатель на следующее ребро
};

struct flow_graph {
    edgenode** edges;   // Массив указателей на списки смежности для каждой вершины
};

// Функция поиска ребра между вершинами x и y
edgenode* find_edge(flow_graph* g, int x, int y) {
    edgenode* p = g->edges[x]; // Инициализируем временный указатель для обхода списка смежности вершины x
    while (p != nullptr) {     // Пока не достигнут конец списка
        if (p->v == y) return p; // Если конечная вершина ребра равна y, возвращаем указатель на это ребро
        p = p->next;            // Переходим к следующему ребру в списке
    }
    return nullptr;             // Если ребро не найдено, возвращаем nullptr
}

// Рекурсивная функция для вычисления объема пути
int path_volume(flow_graph* g, int start, int end, int parents[]) {
    if (parents[end] == -1) return 0; // Если путь не существует, возвращаем 0

    edgenode* e = find_edge(g, parents[end], end); // Находим ребро между вершинами parents[end] и end

    if (start == parents[end]) {  // Базовый случай: если начальная вершина равна родительской вершине end
        return e->residual;       // Возвращаем остаточную емкость этого ребра
    }
    else {
        // Рекурсивный вызов для поиска минимальной остаточной емкости на пути
        return std::min(path_volume(g, start, parents[end], parents), e->residual);
    }
}