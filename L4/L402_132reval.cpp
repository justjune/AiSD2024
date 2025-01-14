// L402_132reval.cpp
// Садрисламов Реваль ПМ-201

#include <iostream> // Подключаем библиотеку для ввода-вывода
#include "L402_132.h" // Подключаем заголовочный файл с объявлением функций

int main() {
    int node; // Переменная для хранения индекса узла

    // Запрашиваем у пользователя ввод индекса узла
    std::cout << "Enter node index: ";
    std::cin >> node;

    // Проверяем корректность ввода
    if (node <= 0) {
        std::cerr << "Error: Node index must be a positive number.\n";
        return 1; // Завершаем программу с кодом ошибки
    }

    // Получаем индекс родителя для указанного узла
    int parent = pq_parent(node);
    
    // Получаем индекс левого дочернего узла для указанного узла
    int left_child = pq_young_child(node);

    // Выводим информацию об узле, его родителе и левом дочернем узле
    std::cout << "Node: " << node << "\n"; // Вывод индекса текущего узла
    std::cout << "Parent: " 
              << (parent != -1 ? std::to_string(parent) : "No parent") // Если узел — корень, выводим "No parent"
              << "\n";
    std::cout << "Left Child: " << left_child << "\n"; // Вывод индекса левого дочернего узла

    return 0; // Завершаем программу
}
