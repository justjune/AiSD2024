#ifndef AUK_H
#define AUK_H

#include <vector>

// Структура для элемента таблицы
struct Cell {
    int cost;    // Стоимость
    int par;  // Родительская операция
};

// Константы 
const int INSERT = 1; // Операция вставки
const int DELETE = 2; // Операция удаления
const int NONE = -1;  // Нет родителя

// Объявления функций
void row_init(std::vector<std::vector<Cell>>& m, int i);
void column_init(std::vector<std::vector<Cell>>& m, int i);

#endif // AUK_H
