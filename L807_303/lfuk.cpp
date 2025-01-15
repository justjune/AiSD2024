#include "lfuk.h"
#include <vector>

// Определение глобальной таблицы динамического программирования
std::vector<std::vector<Cell>> m;

// Функция инициализации таблицы
void initialize_table(int maxlines, int maxcolumns) {
    // Установка размера таблицы
    m.resize(maxlines, std::vector<Cell>(maxcolumns));

    // Инициализация значений таблицы
    for (int i = 0; i < maxlines; ++i) {
        for (int j = 0; j < maxcolumns ; ++j) {
            m[i][j].cost = 0;    // Изначально стоимость 0
            m[i][j].parent = NONE; // Нет родителя
        }
    }
}
