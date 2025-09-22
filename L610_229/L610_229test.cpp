#include <iostream>
#include "../graph.hpp"
#include "L610_229.hpp"
using namespace std;

int main() {

    cout << "Test: start testing L610_229\n";
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
    int start = 1;
    dijkstra(&g, start);

    // находим наилучшие пути от начала для всех вершин
    for (int i = 1; i <= g.nvertices; i++) {
        find_path(start, i, parent);
    }
    std::cout << '\n';
    
    cout << "Test: test L610_229 finished\n";

    return 0;
}