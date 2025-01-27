//L520_198
//определение возраста предшественников
//мх-201 Лазуков Никита Владимирович

#include <iostream>
using namespace std;

const int MAX_V = 1000;
enum EdgeClassification { TREE, BACK };

EdgeClassification edge_classification(int x, int y) {
}

void process_edge(int x, int y, int* parent, int* entry_time, int* reachable_ancestor, int* tree_out_degree) {
    EdgeClassification edge_class = edge_classification(x, y);

    if (edge_class == TREE) {
        tree_out_degree[x] = tree_out_degree[x] + 1;
    }
    else if (edge_class == BACK && parent[x] != y) {
        if (entry_time[y] < entry_time[reachable_ancestor[x]]) {
            reachable_ancestor[x] = y;
        }
    }
}


