
// Функция для вставки ребра
void insert_edge(Graph* g, int x, int y, bool directed) {
    EdgeNode* p;                          // Временный указатель
    p = new EdgeNode;                     // Выделяем память для EdgeNode
    p->weight = 0;                        // Задаем вес ребра (NULL эквивалентен 0)
    p->y = y;
    p->next = g->edges[x];                // Вставка в начало списка
    g->edges[x] = p;
    g->degree[x]++;

    if (!directed) {                      // Если граф не ориентированный
        insert_edge(g, y, x, true);       // Рекурсивно добавляем обратное ребро
    } else {
        g->nedges++;
    }
}