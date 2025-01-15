//Невзорова Елена МХ-2

// Данная программа демонстрирует работу функции Increment, вычисляющей значение
// на основе четности входного числа по заданному алгоритму.


#include <iostream>
#include <cmath> // Включаем <cmath> для функций std::log2 и std::pow
#include "increment.h" // Подключаем заголовочный файл increment.h

// Функция Increment реализует алгоритм вычисления значения.
// Если y < 0, возвращает -1 (код ошибки).
// Если y == 0, возвращает 1.
// Если y нечетное, возвращает 2^k, где k - целая часть log2(y).
// Если y четное, вызывает функцию increment из increment.cpp.

int main() {
    int y;
    std::cout << "Enter a non-negative integer y:";

    // Проверяем корректность ввода (ожидаем целое число)
    if (!(std::cin >> y)) {
        std::cerr << "Error: Incorrect input." << std::endl;
        return 1; // Завершаем программу с кодом ошибки 1
    }

    // Вызываем функцию Increment и выводим результат, если нет ошибки
    int result = Increment(y);
    if (result != -1) {
        std::cout << "Result Increment(" << y << "): " << result << std::endl;
    }

    return 0; // Завершаем программу без ошибок
}

