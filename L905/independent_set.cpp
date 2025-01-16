#include "independent_set.h"

using namespace std;
// Функция для сведения задачи поиска независимого множества к задаче вершинного покрытия
bool IndependentSetToVertexCover(const std::vector<std::set<int>>& graph, int k) {
    int n = graph.size(); // Количество вершин в графе
    int k_prime = n - k;  // Размер вершинного покрытия, необходимого для задачи

    // Создаем множество всех вершин
    std::set<int> universe;
    for (int i = 0; i < n; ++i) {
        universe.insert(i);
    }

    // Преобразуем граф в формат для setCover: подмножества для каждого ребра
    std::vector<std::set<int>> subsets;
    for (int i = 0; i < n; ++i) {
        for (int j : graph[i]) {
            if (i < j) { // Чтобы не дублировать ребра
                subsets.push_back({i, j});
            }
        }
    }

    // Решаем задачу вершинного покрытия с помощью setCover
    std::vector<int> cover = setCover(subsets, universe);

    // Если размер вершинного покрытия <= k', то существует независимое множество размера k
    return cover.size() <= k_prime;
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

    return cover;
}