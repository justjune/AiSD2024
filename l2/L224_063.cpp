// Садрисламов Реваль ПМ-201

#include <iostream>  // Библиотека для ввода/вывода
#include "matx.h"    // Пользовательский заголовочный файл, содержащий функцию обработки матрицы
using namespace std;

// Определяем размеры матрицы через константы
const int ROWS = 5;    // Количество строк в матрице
const int COLUMNS = 5; // Количество столбцов в матрице

int main() {
    // Создаем двумерный массив фиксированного размера
    int matrix[ROWS][COLUMNS];

    // Блок ввода данных для матрицы
    cout << "Enter the elements of the matrix (" << ROWS << " lines and " << COLUMNS << " columns):" << endl;
    for (int i = 0; i < ROWS; i++) {         // Цикл по строкам
        for (int j = 0; j < COLUMNS; j++) {  // Цикл по столбцам
            // Просим пользователя ввести значение для текущего элемента
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j]; // Записываем введенное значение в соответствующий элемент массива
        }
    }

    // Вывод исходной матрицы
    cout << "\nThe original matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {         // Цикл по строкам
        for (int j = 0; j < COLUMNS; j++) {  // Цикл по столбцам
            // Выводим текущий элемент матрицы
            cout << matrix[i][j] << ' ';
        }
        cout << endl; // Переход на новую строку после вывода строки матрицы
    }

    // Вызываем функцию обработки матрицы (определена в файле "matx.h")
    processMatrix(ROWS, COLUMNS, matrix);

    // Вывод обработанной матрицы
    cout << "\nProcessed matrix (elements multiplied by 2):" << endl;
    for (int i = 0; i < ROWS; i++) {         // Цикл по строкам
        for (int j = 0; j < COLUMNS; j++) {  // Цикл по столбцам
            // Выводим текущий элемент обработанной матрицы
            cout << matrix[i][j] << ' ';
        }
        cout << endl; // Переход на новую строку после вывода строки матрицы
    }

    return 0; // Завершение программы
}
