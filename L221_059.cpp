//Садрисламов реваль пм-201
#include <iostream>
#include "selection_sort.h" // Подключаем заголовочный файл с функцией selection_sort

using namespace std;

int main() {
    // Исходный массив для сортировки
    int s[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(s) / sizeof(s[0]); // Определяем количество элементов в массиве

    // Вывод исходного массива
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    // Вызов функции сортировки selection_sort из selection_sort.cpp
    selection_sort(s, n);

    // Вывод отсортированного массива
    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0; // Завершение программы
}
