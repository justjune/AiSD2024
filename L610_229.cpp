#include "graph.h"
#include <iostream>
int parent[MAXV+1];
void dijkstra(graph *g, int start){
    edgenode *p;
    bool intree[MAXV+1];
    int distance[MAXV+1];
    int v;
    int w;
    int weight;
    int dist;
    for (int i = 1; i <= g->nvertices; i++){
        intree[i] = false;
        distance[i] = MAXINT;
        parent[i] = -1;
    }
    distance[start] = 0;
    v = start;
    while (intree[v] == false)
    {
        intree[v] = true;
        p = g->edges[v];
        while (p!=nullptr)
        {
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
    
}