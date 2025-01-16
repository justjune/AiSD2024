#include "dog.h"



long fib_dp(int n) {
    int i;                   
    long f[MAXN + 1];        // Массив 

    f[0] = 0;                // Первое число Фибоначчи
    f[1] = 1;                // Второе число Фибоначчи

    for (i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2]; 
    }

    return f[n];             
}
