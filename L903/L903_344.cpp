//Невзорова Елена МХ-2
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include "l903.h" // Подключаем заголовочный файл для использования вспомогательных функций


int main() {
    // Ввод данных от пользователя
    std::vector<int> S;
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        S.push_back(x);
    }

    // Поиск выпуклой оболочки
    std::vector<std::pair<int, int>> hull = ConvexHull(S);

    // Вывод результата
    std::cout << "Convex hull points (x, y):" << std::endl;
    for (const auto& point : hull) {
        std::cout << "(" << point.first << ", " << point.second << ")" << std::endl;
    }

    return 0;
}