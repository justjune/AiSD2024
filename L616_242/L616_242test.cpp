#include <iostream>
#include "L616_242.hpp"

using namespace std;



int main() {
    cout << "Test: start testing L616_242\n";

    flow_graph g; 
    init_flow_graph(&g, 6); // Пример: 6 вершин
    add_edge(&g,0, 1, 16);
    add_edge(&g,0, 2, 13);
    add_edge(&g,1, 2, 10);
    add_edge(&g,1, 3, 12);
    add_edge(&g,2, 1, 4);
    add_edge(&g,2, 4, 14);
    add_edge(&g,3, 2, 9);
    add_edge(&g,3, 5, 20);
    add_edge(&g,4, 3, 7);
    add_edge(&g,4, 5, 4);
    bool BFS = bfs(&g, 6, 0, 5);
    int pathVolume = path_volume(&g, 0, 5);
    std::cout << "path volume: " << pathVolume << std::endl;
    cout << "Test: test L616_242 finished\n";
    return 0;
}