//Севостьянова Анна МХ-201
//Библиотека
#include <iostream>
#include "auk.h"

int main() {
    int lines, columns;

    // Ввод размеров таблицы
    std::cout << "Enter the number of lines:";
    std::cin >> lines;
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    // Создание таблицы
    std::vector<std::vector<Cell>> m(lines, std::vector<Cell>(columns));

    // Инициализация первой строки
    for (int i = 0; i < columns; ++i) {
        row_init(m, i);
    }

    // Инициализация первого столбца
    for (int i = 0; i < lines; ++i) {
        column_init(m, i);
    }

    // Вывод таблицы
    std::cout << "The table after initialization:\n";
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "[Cost: " << m[i][j].cost << ", Par: " << m[i][j].par << "] ";
        }
        std::cout << std::endl;
    }

    return 0;
}
