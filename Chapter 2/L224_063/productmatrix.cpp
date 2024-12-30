#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
  const int rows=5;
    const int columns=5;

void productmatrix (int r, int c, int arr[rows][columns])
{
    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            arr[i][j] = 0;
            for (int k = 1; k < r; k++) {
                arr[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }
}