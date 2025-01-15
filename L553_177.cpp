// Функция для добавления ребра в граф
void insert_edge(Graph* g, int x, int y, bool directed) {
    EdgeNode* edge = new EdgeNode;
    edge->y = y;
    edge->weight = 0;
    edge->next = g->edges[x];

    g->edges[x] = edge;
    g->degree[x]++;

    if (!directed) {
        insert_edge(g, y, x, true);
    } else {
        g->nedges++;
    }
}

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
