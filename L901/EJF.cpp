#include <vector>
#include <set>
#include "EJF.h"

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