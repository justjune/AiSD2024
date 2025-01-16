#ifndef INDEPENDENT_SET_H
#define INDEPENDENT_SET_H

#include <vector>
#include <set>

// Объявление функции
bool IndependentSetToVertexCover(const std::vector<std::set<int>>& graph, int k);

// Объявление функции setCover
std::vector<int> setCover(const std::vector<std::set<int>>& subsets, std::set<int> U);


#endif
