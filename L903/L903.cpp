#include "l903.h" // Подключение заголовочного файла для объявления ConvexHull
#include <algorithm> // Для std::sort (если используется)

std::vector<std::pair<int, int>> ConvexHull(const std::vector<int>& S) {
    std::vector<std::pair<int, int>> points;
    for (int i : S) {
        points.emplace_back(i, i * i); // Каждая точка определяется как (x, x^2)
    }

    std::sort(points.begin(), points.end()); // Сортируем точки по координате x
    return points;
}
