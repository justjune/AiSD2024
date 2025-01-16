// Севостьянова Анна МХ-201


//Библиотека
#include <iostream>
#include "shok.h"



int main() {
    int n;
    std::cout << "Enter the Fibonacci term you want to compute: ";// Выводит пользователю текстовое сообщение
    std::cin >> n;
//Проверяет является ли введённое значение n отрицательным.
    if (n < 0) {
        std::cerr << "Invalid input! Fibonacci sequence is defined for non-negative integers." << std::endl;// Если n < 0, выводит сообщение об ошибке
        return 1;
    }

    long result = fib_r(n);
    std::cout << "Fibonacci number " << n << " is " << result << std::endl;

    return 0;
}
