#include <iostream>
#include "l817.h"

void reconstruct_partition(int s[], int d[][100], int n, int k) {
    if (k == 1) {
        print_books(s, 1, n);
    } else {
        reconstruct_partition(s, d, d[n][k], k - 1);
        print_books(s, d[n][k] + 1, n);
    }
}

void print_books(int s[], int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;
}
