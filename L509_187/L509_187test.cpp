#include <iostream>
#include "L509_187.hpp"

using namespace std;

static void process_edge(int v, int y) {
    std::cout << "Обработка ребра (" << v << ", " << y << ")\n";
}

int main(){
    cout << "Test: start testing L509_187\n";
    graph g;

    initialize_graph(&g, false);

    g.nvertices = 6;
    insert_edge(&g, 1, 2, 5, false);
    insert_edge(&g, 1, 3, 7, false);
    insert_edge(&g, 2, 4, 2, false);
    insert_edge(&g, 3, 5, 4, false);
    insert_edge(&g, 4, 6, 8, false);
    

    bfs(&g, 1, process_edge);

    for (int i=1; i<=g.nvertices; i++)
        find_path(1,i,parent);
    cout << '\n';
    cout << "Test: test L509_187 finished\n";
}