#include <queue>
#include <iostream>

// Пример заглушек для недостающих структур и функций
struct Edgenode {
    int y;
    Edgenode *next;
};

struct Graph {
    int nvertices;
    bool directed;
    Edgenode **edges;
};

bool *discovered;
bool *processed;
int *parent;

void initialize_search(Graph *g) {
    for (int i = 0; i < g->nvertices; i++) {
        processed[i] = discovered[i] = false;
        parent[i] = -1;
    }
}

void process_vertex_early(int v) {
    std::cout << "Обработка вершины " << v << " на этапе раннего обхода\n";
}

void process_edge(int v, int y) {
    std::cout << "Обработка ребра между вершинами " << v << " и " << y << "\n";
}

void process_vertex_late(int v) {
    std::cout << "Обработка вершины " << v << " на этапе позднего обхода\n";
}

// Основная функция обхода в ширину
void bfs(Graph *g, int start) {
    initialize_search(g);       // Инициализация поиска перед началом обхода в ширину

    std::queue<int> q;          // Очередь для вершин, которые нужно обработать
    int v;                      // Текущая вершина
    int y;                      // Смежная (следующая) вершина
    Edgenode *p;                // Временный указатель для обхода ребер

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
                q.push(y);          // Добавляем ее в очередь
                discovered[y] = true; // Помечаем как обнаруженную
                parent[y] = v;       // Устанавливаем текущую вершину как родителя
            }
            
            p = p->next;  // Переходим к следующему ребру
        }
        
        process_vertex_late(v); // Обрабатываем вершину на этапе "позднего" обхода
    }
}

// Главная функция
int main() {
    // Здесь инициализируем тестовый граф для демонстрации
    int n = 5;  // Число вершин
    Graph g;
    g.nvertices = n;
    g.directed = false;

    // Выделение памяти для массивов состояния вершин
    discovered = new bool[n];
    processed = new bool[n];
    parent = new int[n];
    g.edges = new Edgenode*[n];

    for (int i = 0; i < n; i++) {
        g.edges[i] = nullptr;
    }

    // Здесь можно добавить ребра в граф для тестирования

    // Выполнение обхода графа в ширину, начиная с вершины 0
    bfs(&g, 0);

    // Освобождение памяти
    delete[] discovered;
    delete[] processed;
    delete[] parent;
    delete[] g.edges;

    return 0;
}
