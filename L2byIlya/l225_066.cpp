//Ткаченко Илья ПМ-201
#include <iostream>
#include "power.h" // Подключение заголовочного файла

using namespace std;

int main() {
    int base, exponent;

    // Ввод значений от пользователя
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the degree indicator: ";
    cin >> exponent;

    // Вычисление и вывод результата
    int result = power(base, exponent);
    cout << "Result: " << base << "^" << exponent << " = " << result << endl;

    return 0;
}
