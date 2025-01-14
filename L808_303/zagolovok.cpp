#ifndef L808_303_H
#define L808_303_H

#define MAXLEN 2 // Максимальная длина строк для динамического программирования

struct Cell {
    int cost;    // Стоимость попадания в данную ячейку
    int parent;  // Родительская ячейка
};

extern Cell m[MAXLEN + 1][MAXLEN + 1]; // Таблица динамического программирования

// Прототипы функций
void row_init(int i);              // Инициализация строки таблицы
void column_init(int i);           // Инициализация столбца таблицы
int match(char a, char b);         // Вычисление стоимости совпадения
int insert(char c);                // Вычисление стоимости вставки
int del(char c);                   // Вычисление стоимости удаления
void goal_cell(const char* s, const char* t, int* i, int* j); // Определение целевой ячейки

#endif // L808_303_H