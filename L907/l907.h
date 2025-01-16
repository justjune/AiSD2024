#ifndef L907_H
#define L907_H

#include <vector>
#include <set>

using namespace std;

vector<set<int>> complementGraph(const vector<set<int>>& graph);

bool findClique(const vector<set<int>>& graph, int k);

vector<int> setCover(const vector<set<int>>& subsets, set<int> U);

#endif