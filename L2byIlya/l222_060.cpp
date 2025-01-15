#include <iostream>
#include <cstdlib>
#include <ctime>
#include "function.h"

using namespace std;

int main() {
    const int size = 10; // Размер массива задан константой
    int numbers[size];

    srand(static_cast<unsigned>(time(0))); // Используем static_cast для времени
    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 100; // Генерация случайных чисел от 0 до 99
        cout << numbers[i] << ' ';
    }
    cout << "\nBefore sorting\n";

    sortArray(numbers, size); // Вызов функции сортировки

    cout << "After sorting\n";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << ' ';
    }
    cout << endl;

    return 0;
}

