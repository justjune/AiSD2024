//Невзорова Елена Мх-2
#include <iostream>
#include <vector>
#include <set>
#include "l908.h"

using namespace std;

int main() {
    int m;
    vector<pair<int, int>> edges;

    // Ввод количества рёбер
    cout << "Enter the number of edges: ";
    cin >> m;

    cout << "Enter the edges (pairs of vertices):" << endl;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    // Вызов функции VertexCover
    VertexCover(edges);

    return 0;
}