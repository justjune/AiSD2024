#include <iostream>
#include <queue>
using namespace std;

void twocolor(graph *g) 
{
    int i;
    for (i = 1; i <= g->nvertices; i++) {
        color[i] = UNCOLORED;}
    bipartite = TRUE;
    initialize_search(g);
    for (i = 1; i <= g->nvertices; i++) {
        if (discovered[i] == FALSE) {
            color[1] = WHITE;
            bfs(g, 1);}
            }
}

void process_edge(int x, int y) 
{
    if (color[x] == color[y]) {
        bipartite = FALSE;
        printf("Warning: not bipartite due to (%d, %d)\n", x, y);
        }
    color[y] = complement(color[x]);
}

int complement(int color) {
    if (color == WHITE) return BLACK;
    if (color == BLACK) return WHITE;
    return UNCOLORED;
}