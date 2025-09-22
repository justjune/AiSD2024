#include <iostream>
#include "../graph.hpp"
#include "L617_243.hpp"
#include "../L509_187/L509_187.hpp"

using namespace std;

static void process_edge(int v, int y) {
    std::cout << "Обработка ребра (" << v << ", " << y << ")\n";
}

int main() {
    cout << "Test: start testing L617_243\n";
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

    // Ищем путь от начальной вершины до конечной (задается вручную)
    bfs(&g, 1, process_edge);
    find_path(1, 5, parent);
    // Модифицируем веса ребер вдоль пути
    augment_path(&g, 1, 5, parent, 1);


    // Выводим обновленный граф
    std::cout << "\nUpdated graph:" << std::endl;
    print_graph(&g);


    cout << "Test: test L617_243 finished\n";

    return 0;
}