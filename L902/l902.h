#ifndef L902_H
#define L902_H

#include <vector> // Добавлено для использования vector

using namespace std;

int EditDistance(const vector<int>& S, const vector<int>& T, int C_ins, int C_del);
vector<int> LongestIncreasingSubsequence(const vector<int>& S);

#endif
