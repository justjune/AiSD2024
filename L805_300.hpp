#ifndef L805_300_h
#define L805_300_h

#include "L802_296.hpp"

long binomial_coefficient(n, m)
{
    long bc[MAXN][MAXN];
    for (int i=0; i<=n; i++) bc[i][0] = 1;
    for (int j=0; j<=n; j++) bc[j][j] = 1;
    for (int i=1; i<=n; i++) 
        for (int j=1; j<i; j++)
            bc[i][j] = bc[i-1][j-1] + bc[i-1][j];
    return bc[n][m];
}

#endif 