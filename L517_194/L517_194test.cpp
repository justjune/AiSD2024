#include <iostream>
#include "../graph.hpp"
#include "L517_194.hpp"
using namespace std;

int main()
{
    cout << "Test: start testing L517_194\n";
	graph g;

    initialize_graph(&g, false);

	g.nvertices = 6;
    insert_edge(&g, 1, 2, 5, false);
    insert_edge(&g, 1, 3, 7, false);
    insert_edge(&g, 2, 4, 2, false);
    insert_edge(&g, 3, 5, 4, false);
    insert_edge(&g, 4, 6, 8, false);

	print_graph(&g);

	initialize_search(&g);
	dfs(&g,1);

    for (int i=1; i<=g.nvertices; i++)
        find_path(1,i,parent);
    std::cout << '\n';
    cout << "Test: test L517_194 finished\n";
}