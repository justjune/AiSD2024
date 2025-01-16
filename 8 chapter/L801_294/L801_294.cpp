#include "L801_294.hpp"
#include <iostream>

using namespace std;

long fib_r(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return fib_r(n-1) + fib_r(n-2);
}

int main () {
    cout<<fib_r(5)<<" and "<<fib_r(6);
}