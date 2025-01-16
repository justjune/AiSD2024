// Функция инициализации графа
void initialize_graph(Graph* g, bool directed) {
    g->nvertices = 0;
    g->nedges = 0;
    g->directed = directed;

    for (int i = 1; i <= MAXV; i++) {
        g->degree[i] = 0;
        g->edges[i] = nullptr;
    }
}
