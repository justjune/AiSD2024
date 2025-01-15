#include "funnc.h"

// Инициализация очереди
void pq_init(PriorityQueue& q) {
    q.n = 0; // Обнуляем счётчик элементов
}

// Функция получения родителя
int pq_parent(int p) {
    if (p == 0) return -1; // Корень не имеет родителя
    return (p - 1) / 2;
}

// Функция обмена элементов
void pq_swap(PriorityQueue& q, int i, int j) {
    std::swap(q.q[i], q.q[j]);
}

// Функция подъёма элемента вверх
void bubble_up(PriorityQueue& q, int p) {
    if (pq_parent(p) == -1) return; // Корень, подъём невозможен
    if (q.q[pq_parent(p)] < q.q[p]) {
        pq_swap(q, p, pq_parent(p));
        bubble_up(q, pq_parent(p));
    }
}

// Функция вставки элемента в очередь
void pq_insert(PriorityQueue& q, item_type x) {
    if (q.n >= q.max_size) {
        std::cerr << "Warning: Priority queue overflow, insert x=" << x << std::endl;
    } else {
        q.q[q.n] = x;
        bubble_up(q, q.n);
        q.n++;
    }
}

// Функция создания кучи с повторяющимися вставками
void make_heap(PriorityQueue& q, const std::vector<item_type>& s, int n) {
    pq_init(q); // Инициализация очереди
    for (int i = 0; i < n; ++i) {
        pq_insert(q, s[i]);
    }
}
