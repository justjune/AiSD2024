#include "pusk.h"

int pusk2(int a, int n)
{
    if (n == 0)
        return 1;
    int x = pusk2(a, n / 2);
    if (n % 2 == 0)
        return x * x;
    else
        return a * x * x;
}
