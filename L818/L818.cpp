#include "L818.h"
#include <limits>
#include <algorithm>

using namespace std;

double MinimumWeightTriangulation(const vector<vector<double>>& distances) {
    int n = distances.size();
    vector<vector<double>> T(n, vector<double>(n, 0.0)); // Матрица для хранения результатов

    for (int gap = 2; gap < n; ++gap) { // Разница между началом и концом подмассива
        for (int i = 0; i < n - gap; ++i) {
            int j = i + gap;
            T[i][j] = numeric_limits<double>::infinity(); // Устанавливаем начальное значение для поиска минимума

            // Ищем минимальный вес триангуляции для подмассива
            for (int k = i + 1; k < j; ++k) {
                double weight = T[i][k] + T[k][j] + distances[i][k] + distances[k][j] + distances[i][j];
                T[i][j] = min(T[i][j], weight);
            }
        }
    }

    return T[0][n - 1]; // Возвращаем минимальную стоимость триангуляции
}