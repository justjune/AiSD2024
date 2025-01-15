// Севостьянова Анна МХ-201
// Библиотека

#include <iostream>
#include "lfuk.h"

int main() {
    int lines, columns;

    // Ввод размеров таблицы
    std::cout << "Enter the number of lines: ";
    std::cin >> lines;
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    // Инициализация таблицы
    initialize_table(lines, columns);

    // Вывод инициализированной таблицы
    std::cout << "Initialized table:\n";
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "[Cost: " << m[i][j].cost << ", Parent: " << m[i][j].parent << "] ";
        }
        std::cout << "\n";
    }

    return 0;
}

