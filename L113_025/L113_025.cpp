#include <iostream>
#include "CP.h"

int main() {
    std::vector<Point> points = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    double minDistance = closestPair(points);
    std::cout << "Минимальное расстояние между ближайшими точками: " << minDistance << std::endl;
    return 0;
}

