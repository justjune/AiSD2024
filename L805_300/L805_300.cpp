// Севостьянова Анна МХ-201

#include <iostream>
#include "anka.h"

int main() {
    int n, m;

    std::cout << "Enter the values n and m: ";
    std::cin >> n >> m;

    if (n < m || n < 0 || m < 0) {
        std::cerr << "Error: incorrect values of n and m.\n";
        return 1;
    }

    long result = binomial_coefficient(n, m);
    std::cout << "The binomial coefficient C(" << n << ", " << m << ") = " << result << std::endl;

    return 0;
}