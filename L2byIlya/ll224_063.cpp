//Ткаченко Илья ПМ-201
#include <iostream>
#include "fuun.h"

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Ввод размеров первой матрицы
    std::cout << "Enter the number of rows and columns for matrix A: ";
    std::cin >> rowsA >> colsA;

    // Создание и ввод матрицы A
    Matrix A(rowsA, std::vector<int>(colsA));
    std::cout << "Enter the elements of matrix A:\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            std::cin >> A[i][j];
        }
    }

    // Ввод размеров второй матрицы
    std::cout << "Enter the number of rows and columns for matrix B: ";
    std::cin >> rowsB >> colsB;

    // Создание и ввод матрицы B
    Matrix B(rowsB, std::vector<int>(colsB));
    std::cout << "Enter the elements of matrix B:\n";
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            std::cin >> B[i][j];
        }
    }

    try {
        // Умножение матриц
        Matrix C = multiply_matrices(A, B);

        // Вывод результирующей матрицы
        std::cout << "The result of matrix multiplication is \n";
        for (const auto& row : C) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }

    return 0;
}
