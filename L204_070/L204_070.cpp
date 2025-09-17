#include <iostream>
#include "L204_070.hpp"

Matrix<int> matrix_multiply(Matrix<int> a, Matrix<int> b){
    Matrix<int> c;
    if (a.cols == b.rows){
        c = Matrix<int> (a.rows, b.cols);
        for (int i = 0; i < a.rows; i++){
            for (int j = 0; j < b.cols; j++){
                c(i, j) = 0;
                for (int k =0; k < b.rows; k++){
                    c(i, j) += a(i, k) * b(k, j);
                }
            }
        }
    }
    else{
        std::cout << "Не удалось умножить матрицы, так как количество столбцов первой матрицы не равно количеству строк второй\n";
    }
    return c;
}