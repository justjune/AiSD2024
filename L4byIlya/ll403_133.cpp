#include "funnc.h"
#include <iostream>
#include <vector>

int main() {
    // Инициализация приоритетной очереди
    int max_size;
    std::cout << "Введите максимальный размер очереди: ";
    std::cin >> max_size;

    PriorityQueue pq(max_size);

    // Ввод массива для создания кучи
    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    std::vector<item_type> elements(n);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
    }

    // Создание кучи
    make_heap(pq, elements, n);

    // Вывод кучи
    std::cout << "Приоритетная очередь после создания кучи: ";
    for (int i = 0; i < pq.n; ++i) {
        std::cout << pq.q[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
