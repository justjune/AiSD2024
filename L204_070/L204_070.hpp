#ifndef L204_070_HPP
#define L204_070_HPP
#include <vector>

template <typename T>
struct Matrix {
    std::vector<T> data; // Один большой массив для хранения элементов
    int rows;
    int cols;

    // Конструктор
    Matrix(int r, int c) : rows(r), cols(c), data(r * c) {}
    Matrix(): rows(0), cols(0), data(0){}
    // Доступ к элементу по индексам (строка, столбец)
    T& operator()(int r, int c) {
        return data[r * cols + c];
    }

    const T& operator()(int r, int c) const {
        return data[r * cols + c];
    }
};

Matrix<int> matrix_multiply(Matrix<int> a, Matrix<int> b);

#endif
