//Ткаченко Илья ПМ-201 листинг 302_087
#include <iostream>
#include "lfuk.h"

int main() {
    // Создаем связанный список вручную
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    // Ввод значения для поиска
    int x;
    std::cout << "Введите элемент для поиска в связанном списке: ";
    std::cin >> x;

    // Поиск элемента
    Node* result = search_list(head, x);

    // Вывод результата
    if (result != nullptr) {
        std::cout << "Элемент найден: " << result->item << std::endl;
    } else {
        std::cout << "Элемент не найден." << std::endl;
    }

    // Освобождение памяти
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
