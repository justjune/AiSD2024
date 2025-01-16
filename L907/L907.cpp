#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include "l907.h" // Подключение заголовочного файла

using namespace std;

// Функция для построения дополненного графа G'
vector<set<int>> complementGraph(const vector<set<int>>& graph) {
    size_t n = graph.size();
    vector<set<int>> complement(n);

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (i != j && graph[i].find(j) == graph[i].end()) {
                complement[i].insert(j); // Добавляем ребро, если его нет в исходном графе
            }
        }
    }

    return complement;
}

// Основная функция для поиска клики
bool findClique(const vector<set<int>>& graph, int k) {
    // Строим дополнение графа G'
    vector<set<int>> complement = complementGraph(graph);

    // Используем функцию поиска независимого множества из EJF.cpp
    set<int> allVertices;
    for (size_t i = 0; i < graph.size(); i++) {
        allVertices.insert(i);
    }

    // Проверяем, существует ли независимое множество размера k в дополнении графа
    vector<int> independentSet = setCover(complement, allVertices);

    return static_cast<int>(independentSet.size()) >= k; // Независимое множество размера >= k соответствует клике размера >= k
}

vector<int> setCover(const vector<set<int>>& subsets, set<int> U) {
    vector<int> cover;
    vector<bool> chosen(subsets.size(), false);

    while (!U.empty()) {
        int bestIndex = -1, maxCovered = 0;

        for (size_t i = 0; i < subsets.size(); i++) {
            if (chosen[i]) continue; // Пропускаем уже выбранные подмножества

            int count = 0;
            // Подсчет покрываемых элементов
            for (int elem : subsets[i]) {
                if (U.count(elem)) count++;
            }

            if (count > maxCovered) {
                maxCovered = count;
                bestIndex = i;
            }
        }

        if (bestIndex == -1) break; // Если не найдено подмножество, выходим

        cover.push_back(bestIndex);
        chosen[bestIndex] = true; // Помечаем подмножество как выбранное

        // Удаляем покрытые элементы из U
        for (int elem : subsets[bestIndex]) {
            U.erase(elem);
        }
    }

    return cover; // Возвращаем найденное покрытие
}