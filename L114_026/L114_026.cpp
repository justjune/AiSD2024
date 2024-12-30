#include <iostream>
#include "TSP.h"
#include <vector>

int main() {
    std::vector<Point> points = {{0, 0}, {1, 1}, {2, 0}, {1, -1}};
    std::vector<Point> solution = solveTSP(points);

    std::cout << "Оптимальный маршрут: ";
    for (const auto& p : solution) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }
    std::cout << std::endl;
    std::cout << "Общая длина: " << calculateTotalDistance(solution) << std::endl;

    return 0;
}