//Ткаченко Илья пм-201
#include <iostream>
#include "selection_sort.h" // Подключение заголовочного файла с функцией selection_sort

using std::cout;
using std::endl;

int main() {
    // Массив данных для обработки
    int data[] = {64, 25, 12, 22, 11};
    int count = sizeof(data) / sizeof(data[0]); // Подсчёт количества элементов

    // Печать начального массива
    cout << "Array before sorting: ";
    for (int idx = 0; idx < count; ++idx) {
        cout << data[idx] << " ";
    }
    cout << endl;

    // Вызов функции сортировки из подключённого файла
    selection_sort(data, count);

    // Печать отсортированного массива
    cout << "Array after sorting: ";
    for (int idx = 0; idx < count; ++idx) {
        cout << data[idx] << " ";
    }
    cout << endl;

    return 0; // Завершаем выполнение
}