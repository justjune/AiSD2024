#ifndef L616_242_HPP
#define L616_242_HPP
#define MAXV 1000

struct edgenode {
    int v;              // Конечная вершина ребра
    int residual;       // Остаточная пропускная способность
    edgenode* next;     // Указатель на следующее ребро
};

struct flow_graph {
    edgenode** edges;   // Массив указателей на списки смежности для каждой вершины
};

void add_edge(flow_graph* g, int x, int y, int capacity);
void init_flow_graph(flow_graph *g ,int n);
int path_volume(flow_graph* g, int start, int end);
bool bfs(flow_graph* g, int n, int start, int end);

#endif