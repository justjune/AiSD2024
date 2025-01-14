#ifndef DET_H
#define DET_H

#include <map>
#include <vector>

void BFS(const std::map<int, std::vector<int>>& graph, int startVertex);
void bfs(const std::map<int, std::vector<int>>& graph, int startVertex, bool isDirected);

#endif
