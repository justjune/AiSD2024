//Садрисламов Реваль ПМ-201
#include <iostream>
#include "L402_132.h" // Подключение заголовочного файла с описанием структуры priority_queue и функций
#include "obj.h" // Подключение заголовочного файла с реализацией функций для работы с очередью
#include <limits> // Подключение для std::numeric_limits
// Главная функция программы
int main() {
    priority_queue queue = {}; // Создание и инициализация очереди с приоритетами
    queue.n = 0; // Установка начального размера очереди в 0

    int numElements; // Переменная для хранения количества элементов
    std::cout << "Enter the number of items:  "; // Запрос на ввод количества элементов

    // Цикл для проверки корректности ввода количества элементов
    while (!(std::cin >> numElements) || numElements <= 0) {
        std::cin.clear(); // Очистка флага ошибки ввода
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропуск некорректного ввода
        std::cout << "Invalid value. Repeat the input: "; // Сообщение об ошибке
    }

    std::cout << "Enter " << numElements << " elements:\n"; // Инструкция для ввода элементов

    // Цикл для ввода элементов очереди
    for (int i = 0; i < numElements; ++i) {
        int value; // Переменная для хранения текущего вводимого значения

        // Проверка ввода элемента
        while (!(std::cin >> value)) {
            std::cin.clear(); // Очистка флага ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропуск некорректного ввода
            std::cout << "Invalid value. Repeat the input: "; // Сообщение об ошибке
        }

        pq_insert(&queue, value); // Вставка введённого значения в очередь
    }

    std::cout << "\nQueue Contents:\n"; // Вывод содержимого очереди
    print_queue(queue); // Вызов функции для печати всех элементов очереди

    return 0; // Завершение программы
}
