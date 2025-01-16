#include <iostream>
#include <vector>
#include <stack>
using namespace std;

const int MAX_V = 1000;
vector<int> low(MAX_V + 1);
vector<int> scc(MAX_V + 1, -1);
int components_found = 0;
stack<int> active;

void process_vertex_early(int v) {
    push(&active, v);
}

void process_vertex_late(int v, vector<int>& entry_time, vector<int>& low, vector<int>& scc, int& components_found) {
    if (low[v] == v) {
        int parent_v = parent[v]; // Предположим, что у вас есть массив parent для каждой вершины
        if (entry_time[low[v]] < entry_time[low[parent_v]]) {
            low[parent_v] = low[v];
        }
    }

    pop_component(v);
}

void pop_component(int v) {
    int t;
    components_found++;

    scc[v] = components_found;
    while ((t = pop(&active)) != v) {
        scc[t] = components_found;
    }
}