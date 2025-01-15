#include "auk.h"

// Функция инициализации строки таблицы
void row_init(std::vector<std::vector<Cell>>& m, int i) {
    m[0][i].cost = i; // Установка стоимости
    if (i > 0) {
        m[0][i].par = INSERT; // Если индекс больше 0, это операция вставки
    } else {
        m[0][i].par = NONE; // Для начальной точки родителя нет
    }
}

// Функция инициализации столбца таблицы
void column_init(std::vector<std::vector<Cell>>& m, int i) {
    m[i][0].cost = i; // Установка стоимости
    if (i > 0) {
        m[i][0].par = DELETE; // Если индекс больше 0, это операция удаления
    } else {
        m[i][0].par = NONE; // Для начальной точки родителя нет
    }
}
