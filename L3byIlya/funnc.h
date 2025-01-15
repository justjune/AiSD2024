#ifndef FUNNC_H
#define FUNNC_H

#include <iostream>

// Структура узла односвязного списка
struct Node {
    int item;    // Значение узла
    Node* next;  // Указатель на следующий узел
};

// Функция для вставки элемента в начало списка
void insert_list(Node** head, int x);

#endif // FUNNC_H
