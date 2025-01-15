#ifndef LFUK_H
#define LFUK_H

#include <vector>

// Структура для ячейки таблицы
struct Cell {
    int cost;    // Стоимость попадания в данную ячейку
    int parent;  // Родительская ячейка
};

// Константы
const int INSERT = 1; // Операция вставки
const int DELETE = 2; // Операция удаления
const int NONE = -1;  // Нет родителя

// Объявление глобальной таблицы динамического программирования
extern std::vector<std::vector<Cell>> m;

// Функции для работы с таблицей
void initialize_table(int maxlines, int maxcolumns);

#endif // LFUK_H
