#ifndef L509_187_HPP
#define L509_187_HPP
#include "../graph.hpp"

// Объявляем массивы для отслеживания состояния вершин
extern bool processed[MAXV + 1];    // Отмечает, обработана ли вершина
extern bool discovered[MAXV + 1];   // Отмечает, обнаружена ли вершина
extern int parent[MAXV + 1];        // Родительская вершина для каждой вершины

void process_vertex_early(int v);
void process_vertex_late(int v);
void initialize_search(graph *g); 
void bfs(graph *g, int start, void (*pe)(int,int));

#endif