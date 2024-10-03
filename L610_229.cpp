#include "graph.h"
#include <iostream>
void dijkstra(graph *g, int start){
    bool intree[MAXV+1];
    int distance[MAXV+1];
    int parent[MAXV+1];
    int v = start;
    int w;
    int weight;
    int dist;
    distance[start] = 0;
    for (int i = 1; i <= g->nvertices; i++){
        intree[i] = false;
        distance[i] = MAXINT;
        parent[i] = -1;
    }
    while (!intree[v])
    {
        intree[v] = true;
        edgenode* p = g->edges[v];
        while (p!=nullptr)
        {
            std::cout << p->weight << std::endl;
            w = p->y;
            weight = p->weight;
            if (distance[w] > (distance[v]+weight))
            {
                distance[w] = distance[v]+weight;
                parent[w] = v;
            }
            p = p->next;
        }
        v = 1;
        dist = MAXINT;
        for (int i  = 1; i<=g->nvertices; i++){
            if ((intree[i] == false) && (dist > distance[i])){
                dist = distance[i];
                v = i;
            }
        }
        
    }
    for (int i = 1; i <= g->nvertices; i++) {
        if (parent[i] != -1) {
            std::cout << parent[i] << " - " << i << ": " << distance[i] << std::endl;
        }
    }
    
}
int main() {
    graph g;
    read_graph(&g, false);
    int start = 3;
    dijkstra(&g, start);

    return 0;
}