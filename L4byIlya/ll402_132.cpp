//Ткаченко Илья ПМ-201
#include "ffunc.h"
#include <iostream>

int main() {
    // Инициализация приоритетной очереди
    int max_size;
    std::cout << "Enter the maximum queue size: ";
    std::cin >> max_size;

    PriorityQueue pq(max_size);

    // Вставка элементов
    char choice;
    do {
        std::cout << "Enter the element to insert: ";
        item_type x;
        std::cin >> x;

        pq_insert(pq, x);

        std::cout << "Queue after insertion: ";
        for (int i = 0; i < pq.n; ++i) {
            std::cout << pq.q[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Do you want to insert another element? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "The job is done." << std::endl;
    return 0;
}
