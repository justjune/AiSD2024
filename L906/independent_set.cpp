#include <iostream>
#include <vector>
#include <set>
#include <utility> // Для std::pair
#include "independent_set.h"
using namespace std;

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
// Функция для преобразования задачи календарного планирования
void IndependentSet(int G, int k) {
    // Множество интервалов
    vector<pair<double, double>> intervals;

    // Ввод интервалов от пользователя
    cout << "Enter " << G << " intervals in the format 'start end':" << endl;
    for (int i = 0; i < G; ++i) {
        double start, end;
        cin >> start >> end;
        if (start >= end) {
            cout << "Invalid interval (start must be less than end). Try again." << endl;
            --i; // Повторить ввод текущего интервала
            continue;
        }
        intervals.emplace_back(start, end);
    }

    // Преобразуем интервалы в набор множеств для setCover
    vector<set<int>> subsets(intervals.size());
    set<int> universe;

    for (size_t i = 0; i < intervals.size(); ++i) {
        // Добавляем элементы, представляющие временные интервалы
        subsets[i].insert(static_cast<int>(intervals[i].first));
        subsets[i].insert(static_cast<int>(intervals[i].second));

        // Универсум - все элементы из интервалов
        universe.insert(static_cast<int>(intervals[i].first));
        universe.insert(static_cast<int>(intervals[i].second));
    }

    // Решаем задачу независимых множеств с помощью setCover
    vector<int> result = setCover(subsets, universe);

    // Проверяем, удалось ли найти k непересекающихся интервалов
    if (result.size() >= static_cast<size_t>(k)) {
        cout << "Found " << k << " disjoint intervals:" << endl;
        for (size_t i = 0; i < result.size() && i < static_cast<size_t>(k); ++i) {
            cout << "Interval: [" << intervals[result[i]].first << ", " << intervals[result[i]].second << "]" << endl;
        }
    } else {
        cout << "Couldn't find " << k << " disjoint intervals." << endl;
    }
}

