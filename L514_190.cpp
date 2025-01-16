#include <iostream>
#include <queue>
using namespace std;

void connected_components(graph* g) {
    initialize_search(g);
    int c = 0;

    for (int i = 1; i <= g->nvertices; i++) {
        if (!discovered[i]) {
            c++;
            cout << "Component " << c << ":";
            bfs(g, i, discovered, processed, parent);
            cout << endl;
        }
    }
}

void process_vertex_early(int v) {
    cout << " " << v;
}

void process_edge(int x, int y) {
    // Нет действий
}
