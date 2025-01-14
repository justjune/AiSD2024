// Садрисламов Реваль ПМ-201
#include <iostream>  // Подключение библиотеки для ввода-вывода
#include "funk.hpp"  // Подключение пользовательского заголовочного файла
using std::cin;      // Использование std::cin для ввода
using std::cout;     // Использование std::cout для вывода
using std::endl;     // Использование std::endl для перехода на новую строку

int main() {
    // Указатель на начало списка, изначально он пустой
    List* listHead = nullptr;

    // Ввод количества элементов в список
    int numElements;
    cout << "Enter the number of items to add to the list.: ";
    cin >> numElements;

    // Ввод значений для добавления в список
    cout << "Enter " << numElements << " items for the list:" << endl;
    for (int i = 0; i < numElements; ++i) {
        int value;
        cin >> value;
        listHead = append(listHead, value);  // Добавление элемента в список
    }

    // Ввод количества чисел для поиска
    int numSearch;
    cout << "Enter the number of numbers to search in the list: ";
    cin >> numSearch;

    // Ввод чисел для поиска и их обработка
    cout << "Enter " << numSearch << " items for the list:" << endl;
    for (int i = 0; i < numSearch; ++i) {
        int target;
        cin >> target;
        List* result = search_list(listHead, target);  // Поиск элемента в списке
        if (result != nullptr) {  // Если элемент найден
            cout << "Element  " << target << " found. " << endl;
        } else {  // Если элемент не найден
            cout << "Element  " << target << "not found." << endl;
        }
    }

    return 0;  // Завершение программы
}
