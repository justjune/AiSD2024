#ifndef FFUNC_H
#define FFUNC_H

#include <vector>
#include <iostream>
#include <stdexcept>

// Определение типа item_type
using item_type = int;

// Структура приоритетной очереди
struct PriorityQueue {
    std::vector<item_type> q; // Массив элементов
    int n;                    // Текущее количество элементов
    int max_size;             // Максимальный размер очереди

    PriorityQueue(int size) : q(size), n(0), max_size(size) {}
};

// Функции работы с приоритетной очередью
void pq_insert(PriorityQueue& q, item_type x);
void bubble_up(PriorityQueue& q, int p);

// Вспомогательные функции
int pq_parent(int p);
void pq_swap(PriorityQueue& q, int i, int j);

#endif
