// Делягин Ф.О
#ifndef GRAPH_H
#define GRAPH_H
#define MAXV 100
#define MAXINT 100007

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
void print_graph(graph *g); //Функция для вывода графа 
void initialize_graph(graph *g, bool directed); //Функция для задания графа
void insert_edge(graph *g, int x, int y, bool directed); //Функция для добавления ребра
void read_graph(graph *g, bool directed); // Функция для чтения графа
void delete_edge(graph *g, int x, int y, bool directed); // Функция для удаления ребра
void find_path(int start, int end, int parents[]);
#endif
