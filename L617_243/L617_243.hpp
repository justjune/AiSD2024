#ifndef L617_243_HPP
#define L617_243_HPP
#include "../graph.hpp"

edgenode* find_edge(graph* g, int x, int y);
void augment_path(graph* g, int start, int end, int parents[], int volume);

#endif