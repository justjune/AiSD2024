#ifndef GRAPH_H
#define GRAPH_H
#define MAXV 100

struct edgenode {
    int y;               // Вторая(конечная) точка ребра
    int weight;          // вес ребра
    edgenode *next;      // следующее ребро
};

struct graph {
    edgenode *edges[MAXV + 1];  // Информация о ребрах
    int degree[MAXV + 1];        // степень каждой вершины
    int nvertices;               // Количество вершин в графе
    int nedges;                  // Количество ребер
    bool directed;               // Ориентированный граф?
};
void print_graph(graph *g);
void initialize_graph(graph *g, bool directed);
void insert_edge(graph *g, int x, int y, bool directed);
void read_graph(graph *g, bool directed);
void delete_edge(graph *g, int x, int y, bool directed);
#endif