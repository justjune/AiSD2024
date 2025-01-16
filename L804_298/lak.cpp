#include "lak.h"

long fib_ultimate(int n) {
    int i;  // Счетчик
    long back2 = 0, back1 = 1;  // Последние два значения f[n]
    long next;  // Промежуточная сумма

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i < n; i++) {
        next = back1 + back2;
        back2 = back1;
        back1 = next;
    }

    return back1 + back2;
}
