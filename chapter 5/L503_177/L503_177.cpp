//L503_177
//считывание графа
//мх-201 Бенко Андрей Александрович

// Функция для считывания графа
void read_graph(Graph* g, bool directed) {
    int m;  // Количество ребер
    int x, y;  // Вершины в ребре (x, y)

    initialize_graph(g, directed);

    std::cin >> g->nvertices >> m;
    for (int i = 1; i <= m; i++) {
        std::cin >> x >> y;
        insert_edge(g, x, y, directed);
    }
}
