#include <iostream>
#include <vector>
#include <set>
#include "l908.h"


using namespace std;

// Функция для поиска приближенного вершины покрытия графа
void VertexCover(vector<pair<int, int>> edges) {
    set<int> cover; // Множество для хранения вершин покрытия

    while (!edges.empty()) {
        // Выбираем первое ребро (u, v)
        pair<int, int> edge = edges.back();
        edges.pop_back();

        int u = edge.first;
        int v = edge.second;

        // Добавляем вершины u и v в покрытие
        cover.insert(u);
        cover.insert(v);

        // Удаляем из списка рёбер все рёбра, инцидентные вершинам u или v
        vector<pair<int, int>> remainingEdges;
        for (auto& e : edges) {
            if (e.first != u && e.first != v && e.second != u && e.second != v) {
                remainingEdges.push_back(e);
            }
        }
        edges = remainingEdges;
    }

    // Вывод вершин покрытия
    cout << "Vertex Cover: ";
    for (int vertex : cover) {
        cout << vertex << " ";
    }
    cout << endl;
}