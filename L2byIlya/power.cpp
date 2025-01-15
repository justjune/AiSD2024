#include "power.h"

// Функция для вычисления степени
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }

    int halfPower = power(base, exp / 2);
    if (exp % 2 == 0) {
        return halfPower * halfPower;
    } else {
        return base * halfPower * halfPower;
    }
}
