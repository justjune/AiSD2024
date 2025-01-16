#ifndef ANT_H
#define ANT_H

struct Cell {
    int cost;   // Стоимость
    int parent; // Родительская операция (MATCH, INSERT, DELETE)
};

int string_compare(const char* s, const char* t);

#endif // ANT_H