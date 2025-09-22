//Pozdin Konstantin Pm-201
#include "L808_303.hpp"
#include <iostream>
#include <cstring> // Для strlen

// Таблица динамического программирования
Cell m[MAXLEN + 1][MAXLEN + 1];

// Инициализация строки таблицы
void row_init(int i) {
    for (int j = 0; j <= MAXLEN; j++) {
        m[i][j].cost = j;
        m[i][j].parent = (j == 0) ? -1 : 1; // -1: начало, 1: вставка
    }
}

// Инициализация столбца таблицы
void column_init(int i) {
    for (int j = 0; j <= MAXLEN; j++) {
        m[j][i].cost = j;
        m[j][i].parent = (j == 0) ? -1 : 2; // -1: начало, 2: удаление
    }
}

// Вычисление стоимости совпадения
int match(char a, char b) {
    return (a == b) ? 0 : 1;
}

// Вычисление стоимости вставки
int insert(char c) {
    return 1; // Фиксированная стоимость
}

// Вычисление стоимости удаления
int del(char c) {
    return 1; // Фиксированная стоимость
}

// Определение целевой ячейки
void goal_cell(const char* s, const char* t, int* i, int* j) {
    *i = strlen(s);
    *j = strlen(t);
}

// Основная функция вычисления стоимости редактирования
int string_compare(const char* s, const char* t) {
    int i, j, k;
    int opt[3];

    // Инициализация первой строки и столбца
    for (i = 0; i <= MAXLEN; i++) {
        row_init(i);
        column_init(i);
    }

    // Заполнение таблицы динамического программирования
    for (i = 1; i <= strlen(s); i++) {
        for (j = 1; j <= strlen(t); j++) {
            opt[0] = m[i - 1][j - 1].cost + match(s[i - 1], t[j - 1]);
            opt[1] = m[i][j - 1].cost + insert(t[j - 1]);
            opt[2] = m[i - 1][j].cost + del(s[i - 1]);

            m[i][j].cost = opt[0];
            m[i][j].parent = 0;

            for (k = 1; k <= 2; k++) {
                if (opt[k] < m[i][j].cost) {
                    m[i][j].cost = opt[k];
                    m[i][j].parent = k;
                }
            }
        }
    }

    // Определение целевой ячейки
    goal_cell(s, t, &i, &j);
    return m[i][j].cost;
}

