#include <iostream>
#include "L614_242.hpp"

using namespace std;

int main() {
    cout << "Test: start testing L614_242\n";

    FlowGraph g(6); // Пример: 6 вершин
    g.addEdge(0, 1, 16);
    g.addEdge(0, 2, 13);
    g.addEdge(1, 2, 10);
    g.addEdge(1, 3, 12);
    g.addEdge(2, 1, 4);
    g.addEdge(2, 4, 14);
    g.addEdge(3, 2, 9);
    g.addEdge(3, 5, 20);
    g.addEdge(4, 3, 7);
    g.addEdge(4, 5, 4);

    int maxFlow = netflow(g, 0, 5);
    std::cout << "max flow: " << maxFlow << std::endl;
    cout << "Test: test L614_242 finished\n";
    return 0;
}