// Севостьянова Анна МХ-201

#include <iostream>
#include "dog.h"



int main() {
    int n;

    std::cout << "Enter the Fibonacci term you want to compute: ";
    std::cin >> n;

    if (n < 0 || n > MAXN) {
        std::cerr << "Invalid input! Please enter a number between 0 and " << MAXN << "." << std::endl;
        return 1;
    }

    long result = fib_dp(n);
    std::cout << "Fibonacci number " << n << " is " << result << std::endl;

    return 0;
}
