include "L802_296.hpp"

#include <iostream>

using namespace std;

long f[MAXN+1];

long fib_dp (int n) 
{
    long f[MAXN+1];
    f[0] = 0;
    f[1] = 1;
    for (int i=2; i<=n; i++) f[i]=f[i-1]+f[i-2];
    return f[n];
}

int main () {
    cout<<fib_dp(5);
}