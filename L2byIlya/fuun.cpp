#include "fuun.h"
#include <stdexcept> // Для обработки исключений

// Реализация функции умножения матриц
Matrix multiply_matrices(const Matrix& A, const Matrix& B) {
    // Проверяем размеры матриц
    if (A.empty() || B.empty()) {
        throw std::invalid_argument("Matrices cannot be empty");
    }

    // Получаем размеры матриц
    int rowsA = A.size();           // Количество строк в матрице A
    int colsA = A[0].size();        // Количество столбцов в матрице A
    int rowsB = B.size();           // Количество строк в матрице B
    int colsB = B[0].size();        // Количество столбцов в матрице B

    // Проверяем совместимость размеров для умножения
    if (colsA != rowsB) {
        throw std::invalid_argument("The number of columns of matrix A must be equal to the number of rows of matrix B.");
    }

    // Создаём результирующую матрицу размером rowsA x colsB и инициализируем её нулями
    Matrix C(rowsA, std::vector<int>(colsB, 0));

    // Выполняем умножение матриц
    for (int i = 0; i < rowsA; ++i) {        // Перебираем строки матрицы A
        for (int j = 0; j < colsB; ++j) {    // Перебираем столбцы матрицы B
            for (int k = 0; k < colsA; ++k) { // Перебираем столбцы A / строки B
                C[i][j] += A[i][k] * B[k][j]; // Умножаем элементы и добавляем в результат
            }
        }
    }

    return C; // Возвращаем результирующую матрицу
}
