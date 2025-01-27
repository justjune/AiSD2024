//L505_177
//вывод графа на экран
//мх-201 Бенко Андрей Александрович

void print_graph(Graph* g) {
    int i;                 // Счетчик
    EdgeNode* p;           // Временный указатель

    for (i = 1; i <= g->nvertices; i++) {
        cout << i << ": "; // Выводим вершину
        p = g->edges[i];

        while (p != nullptr) {  // Перебираем все смежные вершины
            cout << " " << p->y;
            p = p->next;
        }
        cout << endl; // Переход на новую строку
    }
}
