#include "L802_296.hpp"
#include <iostream>

using namespace std;

#define MAXN 45
#define UNKNOWN -1

long f[MAXN+1];

long fib_c(int n)
{
    if (f[n] == UNKNOWN)
    f[n] = fib_c(n-1) + fib_c(n-2);
    return f[n];
}

long fib_c_driver(int n)
{
    f[0] = 0;
    f[1] = 1;
    for (int i=2; i<=n; i++) f[i]=UNKNOWN;
    return fib_c(n);
}

int main () {
    cout<<fib_r_driver(5);
}