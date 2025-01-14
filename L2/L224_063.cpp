//Ткаченко Илья ПМ-201
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "productmatrix.h" // Подключение заголовочного файла

using namespace std;

const int ROWS = 5;  // Количество строк
const int COLUMNS = 5;  // Количество столбцов

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int matrix[ROWS][COLUMNS];

    // Заполнение и вывод начальной матрицы
    cout << "The initial matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            matrix[i][j] = rand() % 3; // Случайные значения от 0 до 2
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    // Вызываем функцию обработки матрицы
    processMatrix(ROWS, COLUMNS, matrix);

    // Вывод результата
    cout << "Processed matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}



