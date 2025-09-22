#include <iostream>
#include "../graph.hpp"
#include "L606_219.hpp"

using namespace std;

// Точка входа программы
int main(void) {
    cout << "Test: start testing L606_219\n";

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

    // Запуск алгоритма Краскала для нахождения минимального остовного дерева
    kruskal(&g);


    cout << "Test: test L606_219 finished\n";


    return 0;   // Завершение программы
}