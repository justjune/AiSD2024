#include <iostream>
#include "../graph.hpp"
#include "L612_233.hpp"

using namespace std;

int main() {
    cout << "Test: start testing L612_233\n";
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

    // Выполнение алгоритма Флойда-Уоршелла
    floyd_warshall(&g);


    cout << "Test: test L612_233 finished\n";

    return 0;
}