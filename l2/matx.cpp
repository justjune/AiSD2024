#include <iostream>
using namespace std;

// Реализация функции обработки матрицы
void processMatrix(int rows, int cols, int matrix[][5]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= 2; // Умножаем каждый элемент на 2
        }
    }
}
