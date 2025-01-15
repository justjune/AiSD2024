#include "ffunc.h"

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
        q.n++;
        q.q[q.n - 1] = x;
        bubble_up(q, q.n - 1);
    }
}
