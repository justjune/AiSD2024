#include <iostream>
#include "L204_070.hpp"

using namespace std;

int main(){
    cout << "Test: start testing L204_070\n";
    Matrix<int> a;
    Matrix<int> b;
    cout << "Умножение матриц 3x4 и 4x3: \n";
    a = Matrix<int> (3,4);
    b = Matrix<int> (4,3);
    a(0,0) = 1;
    a(0,1) = 2;
    a(0,2) = 3;
    a(0,3) = 4;
    a(1,0) = 5;
    a(1,1) = 6;
    a(1,2) = 7;
    a(1,3) = 8;
    a(2,0) = 9;
    a(2,1) = 10;
    a(2,2) = 11;
    a(2,3) = 12;
    b(0,0) = 7;
    b(0,1) = 8;
    b(0,2) = 9;
    b(1,0) = 3;
    b(1,1) = 2;
    b(1,2) = 1;
    b(2,0) = 1;
    b(2,1) = 5;
    b(2,2) = 9;
    b(3,0) = 2;
    b(3,1) = 6;
    b(3,2) = 8;
    Matrix<int> res = matrix_multiply(a,b);
    for (int i = 0; i < res.rows; i++){
        for (int j = 0; j < res.cols; j++){
            cout<< res(i,j)<< ' ';
        }
        cout << endl;
    }
    cout << "Умножение квадратных матриц: \n";
    a = Matrix<int> (3,3);
    b = Matrix<int> (3,3);
    a(0,0) = 1;
    a(0,1) = 2;
    a(0,2) = 3;
    a(1,0) = 5;
    a(1,1) = 6;
    a(1,2) = 7;
    a(2,0) = 9;
    a(2,1) = 10;
    a(2,2) = 11;
    b(0,0) = 7;
    b(0,1) = 8;
    b(0,2) = 9;
    b(1,0) = 3;
    b(1,1) = 2;
    b(1,2) = 1;
    b(2,0) = 1;
    b(2,1) = 5;
    b(2,2) = 9;
    res = matrix_multiply(a,b);
    for (int i = 0; i < res.rows; i++){
        for (int j = 0; j < res.cols; j++){
            cout<< res(i,j)<< ' ';
        }
        cout << endl;
        
    }
    cout << "Умножение с ошибкой: ";
    a = Matrix<int> (3,3);
    b = Matrix<int> (4,3);
    a(0,0) = 1;
    a(0,1) = 2;
    a(0,2) = 3;
    a(1,0) = 5;
    a(1,1) = 6;
    a(1,2) = 7;
    a(2,0) = 9;
    a(2,1) = 10;
    a(2,2) = 11;
    b(0,0) = 7;
    b(0,1) = 8;
    b(0,2) = 9;
    b(1,0) = 3;
    b(1,1) = 2;
    b(1,2) = 1;
    b(2,0) = 1;
    b(2,1) = 5;
    b(2,2) = 9;
    b(3,0) = 2;
    b(3,1) = 6;
    b(3,2) = 8;
    res = matrix_multiply(a,b);
    cout << "Test: test L204_070 finished\n";
}