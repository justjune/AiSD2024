#ifndef FUNNC_H
#define FUNNC_H

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
void pq_init(PriorityQueue& q);
void pq_insert(PriorityQueue& q, item_type x);
void make_heap(PriorityQueue& q, const std::vector<item_type>& s, int n);

// Вспомогательные функции
void bubble_up(PriorityQueue& q, int p);
int pq_parent(int p);
void pq_swap(PriorityQueue& q, int i, int j);

#endif
