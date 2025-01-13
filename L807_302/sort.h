#ifndef SORT_H
#define SORT_H

#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

struct Cell {
    int cost;    // Стоимость попадания в данную ячейку
    int parent;  // Родительская ячейка
};

Cell m[MAXLEN + 1][MAXLEN + 1]; // Таблица динамического программирования

#endif // L807_302_H