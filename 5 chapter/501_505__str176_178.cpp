#include <iostream>
using namespace std;
// сохраняет элементы списка смежности
struct adjNode {
    int val, cost;
    adjNode* next;
};
// структура для хранения ребер
struct graphEdge {
    int start_ver, end_ver, weight;
};
class DiaGraph {
    // вставить новые вершины в список смежности из заданного графа
    adjNode* getAdjListNode(int value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value; //end_ver
        newNode->cost = weight;

        newNode->next = head;   // указать новую вершину на текущую голову
        return newNode;
    }
    int N;  // количество вершин в графе
public:
    adjNode** head;                //список смежности как массив указателей
    // конструктор
    DiaGraph(graphEdge edges[], int n, int N) {
        // выделить новую вершину
        head = new adjNode * [N]();
        this->N = N;
        // инициализировать указатель головы для всех вершин
        for (int i = 0; i < N; ++i)
            head[i] = nullptr;
        // построить ориентированный граф, добавляя к нему ребра
        for (unsigned i = 0; i < n; i++) {
            int start_ver = edges[i].start_ver;
            int end_ver = edges[i].end_ver;
            int weight = edges[i].weight;
            // вставить в начало
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);

            //указатель указателя на новую вершину
            head[start_ver] = newNode;
        }
    }
    // деконструутор
    ~DiaGraph() {
        for (int i = 0; i < N; i++)
            delete[] head[i];
        delete[] head;
    }
};
// вывести все смежные вершины заданной вершины
void display_AdjList(adjNode* ptr, int i)
{
    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val
            << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}
// реализация графа
int main()
{
    // массив ребер графа.
    graphEdge edges[] = {
        // (x, y, w) -> ребро от x до y с весом w
        {0,1,2},{0,2,4},{1,4,3},{2,3,2},{3,1,4},{4,3,3}
    };
    int N = 6;      // Количество вершин в графе
    // рассчитать количество ребер
    int n = sizeof(edges) / sizeof(edges[0]);
    // построить граф
    DiaGraph diagraph(edges, n, N);
    // распечатать представление списка смежности графа
    cout << "Graph adjacency list " << endl << "(start_vertex, end_vertex, weight):" << endl;
    for (int i = 0; i < N; i++)
    {
        // отобразить смежные вершины i
        display_AdjList(diagraph.head[i], i);
    }
    return 0;
}
