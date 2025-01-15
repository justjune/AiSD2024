//Делягин Ф.О ПМ-201
#include <iostream>
#include <queue>
#include "../graph.h" // Подключаем заголовочный файл с объявлением графа и функций
#define UNCOLORED   0   // Константа для обозначения неокрашенной вершины
#define WHITE       1   // Константа для обозначения белой вершины
#define BLACK       2   // Константа для обозначения черной вершины

using namespace std;

int color[MAXV+1];      // Массив цветов для каждой вершины графа
bool bipartite;         // Флаг, показывающий, является ли граф двудольным

// Возвращает цвет, противоположный текущему
int complement(int color) {
    if (color == WHITE) {
        return(BLACK);
    }

    if (color == BLACK) {
        return(WHITE);
    }
	
    return(UNCOLORED);
}
void process_vertex_early(int v) {
    std::cout << "Обработка вершины " << v << " на этапе раннего обхода\n";
}

void process_vertex_late(int v) {
    std::cout << "Обработка вершины " << v << " на этапе позднего обхода\n";
}

// Обрабатывает ребро между двумя вершинами
void process_edge(int x, int y) {
    // Если соседние вершины имеют одинаковый цвет, граф не двудольный
    if (color[x] == color[y]) {
        bipartite = false;
    }

    // Назначаем соседу противоположный цвет
    color[y] = complement(color[x]);
}
bool processed[MAXV + 1];    // Отмечает, обработана ли вершина
bool discovered[MAXV + 1];   // Отмечает, обнаружена ли вершина
int parent[MAXV + 1];        // Родительская вершина для каждой вершины

// Инициализация поиска
void initialize_search(graph *g) {
    for (int i = 1; i <= g->nvertices; i++) {
        processed[i] = discovered[i] = false;
        parent[i] = -1;
    }
}

// Обход графа в ширину (BFS)
void bfs(graph *g, int start) {
    initialize_search(g);       // Инициализация поиска перед началом обхода в ширину

    std::queue<int> q;          // Очередь для вершин, которые нужно обработать
    int v;                      // Текущая вершина
    int y;                      // Смежная (следующая) вершина
    edgenode *p;                // Временный указатель для обхода рёбер

    q.push(start);              // Добавляем стартовую вершину в очередь
    discovered[start] = true;   // Помечаем стартовую вершину как обнаруженную

    while (!q.empty()) {        // Пока очередь не пуста
        v = q.front();          // Извлекаем вершину из начала очереди
        q.pop();                // Удаляем вершину из очереди

        process_vertex_early(v); // Обрабатываем вершину на этапе "раннего" обхода
        processed[v] = true;     // Помечаем вершину как обработанную

        p = g->edges[v];         // Получаем список смежных вершин для текущей вершины
        while (p != nullptr) {   // Проходим по всем смежным вершинам
            y = p->y;            // Получаем идентификатор смежной вершины
            
            // Обрабатываем ребро, если смежная вершина еще не была обработана
            if (!processed[y] || g->directed) {
                process_edge(v, y);  // Обработка ребра
            }
            
            // Если смежная вершина еще не была обнаружена
            if (!discovered[y]) {
                q.push(y);          // Добавляем её в очередь
                discovered[y] = true; // Помечаем как обнаруженную
                parent[y] = v;       // Устанавливаем текущую вершину как родителя
            }
            
            p = p->next;  // Переходим к следующему ребру
        }
        
        process_vertex_late(v); // Обрабатываем вершину на этапе "позднего" обхода
    }
}

// Основная функция для проверки двудольности графа
void twocolor(graph *g) {
    // Ставим всем вершинам статус "неокрашена"
    for (int i = 1; i <= (g->nvertices); i++) { 
        color[i] = UNCOLORED;
    }

    bipartite = true; // Предполагаем, что граф двудольный

    initialize_search(g); // Инициализируем поиск

    // Проверяем каждую компоненту графа
    for (int i = 1; i <= (g->nvertices); i++) {
        if (discovered[i] == false) { // Если вершина еще не была обработана
            color[i] = WHITE; // Начинаем с окрашивания первой вершины в белый цвет
            bfs(g, i); // Запускаем BFS для текущей компоненты
        }
    }
}

int main() {
    graph g; // Объект графа
    int i;

    read_graph(&g, false); // Считываем граф (неориентированный граф)
    print_graph(&g); // Выводим граф для проверки

    twocolor(&g); // Проверяем двудольность графа

    // Выводим цвета всех вершин
    for (i = 1; i <= (g.nvertices); i++) {
        cout << ' ' << color[i];
    }
    cout << '\n';

    return 0; // Завершаем выполнение программы
}
