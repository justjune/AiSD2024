#include <iostream>
#include "L509_187.cpp"
#define UNCOLORED   0   /* vertex not yet colored */
#define WHITE       1   /* white vertex */
#define BLACK       2   /* black vertex */

using namespace std;

int color[MAXV+1];      /* assigned color of v */
bool bipartite;

void twocolor(graph *g) {
    for (int i = 1; i <= (g->nvertices); i++) { 
        color[i] = UNCOLORED;
    }

    bipartite = true;
 
    initialize_search(g);

    for (int i = 1; i <= (g->nvertices); i++) {
        if (discovered[i] == false) {
            color[i] = WHITE;
            bfs(g, i);
        }
    }
}

int main() {
    graph g;
    int i;

    read_graph(&g, false);
    print_graph(&g);

    twocolor(&g);

    for (i = 1; i <= (g.nvertices); i++) {
        cout << ' ' << color[i];
    }
    cout << '\n';

    return 0;
}