#ifndef FUUN_H
#define FUUN_H

#include <vector>

// Тип для матриц
using Matrix = std::vector<std::vector<int>>;

// Функция умножения матриц
Matrix multiply_matrices(const Matrix& A, const Matrix& B);

#endif // FUUN_H
