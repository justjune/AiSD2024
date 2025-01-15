// Ткаченко Илья ПМ-201
#include <iostream>
#include "funnc.h"

int main() {
    Node* head = nullptr; // Изначально список пуст

    std::cout << "Enter the number of items to add to the list.: ";
    int n;
    std::cin >> n; // Ввод количества элементов

    // Цикл для добавления элементов в список
    for (int i = 0; i < n; ++i) {
        int value;
        std::cout << "Enter a value for the element " << i + 1 << ": ";
        std::cin >> value; // Ввод значения
        insert_list(&head, value); // Вызов функции вставки
    }

    // Вывод содержимого списка
    std::cout << "Contents of the list:";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->item << " "; // Вывод значения текущего узла
        current = current->next;          // Переход к следующему узлу
    }
    std::cout << std::endl;

    // Освобождение памяти, занимаемой списком
    while (head != nullptr) {
        Node* temp = head; // Временный указатель для удаления
        head = head->next; // Переход к следующему узлу
        delete temp;       // Удаление текущего узла
    }

    return 0;
}
