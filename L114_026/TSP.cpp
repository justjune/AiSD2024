/*Гамбург Алиса. Данный файл содержит все исходники, содержащие объявление функций 
из программы OptimalTSP*/
#include "TSP.h"
#include <cmath>
#include <algorithm>
#include <limits>

bool Point::operator<(const Point& other) const {
    return x < other.x || (x == other.x && y < other.y);
}

double distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

double calculateTotalDistance(const std::vector<Point>& path) {
    if (path.size() < 2) return 0.0;

    double totalDistance = 0.0;
    for (size_t i = 0; i < path.size() - 1; ++i) {
        totalDistance += distance(path[i], path[i + 1]);
    }
    totalDistance += distance(path.back(), path.front());
    return totalDistance;
}

std::vector<Point> solveTSP(std::vector<Point> points) {
    if (points.empty()) return {};

    std::vector<Point> bestPath = points;
    double minDistance = std::numeric_limits<double>::infinity();

    std::sort(points.begin(), points.end());

    do {
        double currentDistance = calculateTotalDistance(points);
        if (currentDistance < minDistance) {
            minDistance = currentDistance;
            bestPath = points;
        }
    } while (std::next_permutation(points.begin(), points.end()));

    return bestPath;
}

