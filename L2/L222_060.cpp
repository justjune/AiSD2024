#include <iostream>
#include <cstdlib>
#include <ctime>
#include "myfunc.h" // Подключение заголовочного файла

using namespace std;

int main() {
    const int SIZE = 10; // Размер массива
    int arr[SIZE];

    srand(static_cast<unsigned>(time(nullptr)));

    // Заполнение массива случайными числами
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100; // Случайное число от 0 до 99
        cout << arr[i] << ' ';
    }
    cout << endl;

    // Сортировка массива с использованием функции myfunc
    sortArray(arr, SIZE);

    // Вывод отсортированного массива
    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
