// Садрисламов Реваль  ПМ-201
#include <iostream> // Подключаем библиотеку для работы с вводом-выводом
#include "funk8.hpp" // Подключаем заголовочный файл с реализацией функций работы со списком

using namespace std; // Используем пространство имен std для упрощения записи

int main() {
    // Создаем указатель на список listt1 и инициализируем его значением NULL (пустой список)
    List* listt1 = NULL;

    cout << "Enter the number of items for list 1:";
    int n1;
    cin >> n1; // Ввод количества элементов для списка listt1
    cout << "Enter " << n1 << " items for the list list 1:\n";
    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value; // Ввод значения элемента
        insert_list(&listt1, value); // Добавляем элемент в список
    }

    // Выводим элементы списка listt1
    cout << "List1 list items: ";
    print_list(listt1);

    // Создаем новый пустой список listt2
    List* listt2 = NULL;
    cout << "Enter the number of items for the list2 list: ";
    int n2;
    cin >> n2; // Ввод количества элементов для списка listt2

    if (n2 > 0) {
        cout << "Enter" << n2 << " items for the list2 list:\n";
        for (int i = 0; i < n2; i++) {
            int value;
            cin >> value; // Ввод значения элемента
            insert_list(&listt2, value); // Добавляем элемент в список
        }
    }

    // Выводим элементы списка listt2
    cout << "List2 list items: ";
    print_list(listt2);

    // Создаем еще один пустой список listt3
    List* listt3 = NULL;
    cout << "Enter the number of items for the list t 3: ";
    int n3;
    cin >> n3; // Ввод количества элементов для списка listt3
    cout << "Enter" << n3 << " items for the list3 list:\n";
    for (int i = 0; i < n3; i++) {
        int value;
        cin >> value; // Ввод значения элемента
        insert_list(&listt3, value); // Добавляем элемент в список
    }

    // Выводим элементы списка listt3
    cout << "List items list 3: ";
    print_list(listt3);

    // Завершаем выполнение программы
    return 0;
}
