//Невзорова Елена МХ-2
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include "l907.h" // Подключение заголовочного файла

using namespace std;


int main() {
    int n, m, k;

    // Ввод количества вершин
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<set<int>> graph(n);

    // Ввод ребер графа
    cout << "Enter the number of edges: ";
    cin >> m;

    cout << "Enter the edges (pairs of vertices, 0-based indexing):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].insert(v);
        graph[v].insert(u); // Поскольку граф неориентированный
    }

    // Ввод размера клики
    cout << "Enter the size of the clique to find: ";
    cin >> k;

    // Проверка наличия клики размера k
    if (findClique(graph, k)) {
        cout << "The graph contains a clique of size " << k << " or more." << endl;
    } else {
        cout << "The graph does not contain a clique of size " << k << "." << endl;
    }

    return 0;
}
