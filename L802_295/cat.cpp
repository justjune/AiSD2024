#include "cat.h"

long f[MAXN + 1]; // Массив для хранения вычисленных значений Fibonacci


long fib_c(int n) {
    if (f[n] == UNKNOWN) {
        f[n] = fib_c(n - 1) + fib_c(n - 2);
    }
    return f[n];
}

long fib_c_driver(int n) {
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++) {
        f[i] = UNKNOWN; // Инициализация массива значением UNKNOWN
    }
    return fib_c(n);
}
