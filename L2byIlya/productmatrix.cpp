#include "productmatrix.h"

// Функция для обработки матрицы
void processMatrix(int rows, int cols, int matrix[5][5]) {
    int result[5][5] = {0};

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < cols; ++k) {
                result[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }

    // Копируем результат обратно в исходную матрицу
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = result[i][j];
        }
    }
}
