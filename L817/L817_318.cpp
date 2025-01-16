//Невзорова Елена Мх-2
#include <iostream>
#include "l817.h"

int main() {
    int n, k;
    std::cout << "Enter the number of books (n): ";
    std::cin >> n;

    std::cout << "Enter the number of partitions (k): ";
    std::cin >> k;

    if (n <= 0 || k <= 0 || k > n) {
        std::cerr << "Invalid input. Ensure n > 0, k > 0, and k <= n." << std::endl;
        return 1;
    }

    int s[n + 1];
    int d[100][100] = {0}; // Assuming 100 is the maximum for simplicity

    std::cout << "Enter the values of the books (separated by spaces): ";
    for (int i = 1; i <= n; ++i) {
        std::cin >> s[i];
    }

    std::cout << "Enter the partition table (d): " << std::endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            std::cin >> d[i][j];
        }
    }

    std::cout << "Reconstructed partitions:" << std::endl;
    reconstruct_partition(s, d, n, k);

    return 0;
}
