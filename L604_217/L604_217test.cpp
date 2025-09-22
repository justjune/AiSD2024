#include <iostream>
#include "../graph.hpp"
#include "L604_217.hpp"

using namespace std;

int main() {
    cout << "Test: start testing L604_217\n";
    graph g;

    initialize_graph(&g, false);

    g.nvertices = 5;
    insert_edge(&g, 1, 2, 10, false);
    insert_edge(&g, 1, 3, 15, false);
    insert_edge(&g, 2, 4, 12, false);
    insert_edge(&g, 3, 4, 5, false);
    insert_edge(&g, 3, 5, 20, false);
    insert_edge(&g, 4, 5, 8, false);


	print_graph(&g);
    int start = 1;  // Начальная вершина 
    prim(&g, start);  // Запуск 

     // Выводим минимальные пути для каждой вершины
    for (int i = 1; i <= g.nvertices; i++) {
        find_path(1, i, parent);  // Функция для нахождения пути от начальной вершины до вершины i
    }
    cout << endl;
    cout << "Test: test L604_217 finished\n";

    return 0;  
}