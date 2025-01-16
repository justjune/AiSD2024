#include "anka.h"

const int MAXN = 1000; 


long binomial_coefficient(int n, int m) {
    long bc[MAXN][MAXN] = {0};

    for (int i = 0; i <= n; i++) {
        bc[i][0] = 1; // nC0 = 1
    }

    for (int j = 0; j <= n; j++) {
        bc[j][j] = 1; // nCn = 1
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            bc[i][j] = bc[i - 1][j - 1] + bc[i - 1][j];
        }
    }

    return bc[n][m];
}