/*Гамбург Алиса. Данный файл содержит все исходники, содержащие объявление функций 
из программы ClosestPair*/
#include "CP.h"
#include <cmath>
#include <algorithm>
#include <limits>

// Реализация функции dist
double dist(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

// Реализация функции closestPair
double closestPair(std::vector<Point>& points) {
     if (points.size() <= 1) return std::numeric_limits<double>::max();

    std::sort(points.begin(), points.end(), [](const Point& a, const Point& b) { return a.x < b.x; });

    double minDist = std::numeric_limits<double>::max();
    for (size_t i = 0; i < points.size() -1; ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            minDist = std::min(minDist, dist(points[i], points[j]));
        }
    }
    return minDist;
}

