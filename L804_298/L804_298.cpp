//Севостьянова Анна МХ-201

// библиотека

#include <iostream>
#include "lak.h"

int main() {
    int n;

    std::cout << "Enter the number of the Fibonacci number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: The Fibonacci number cannot be negative." << std::endl;
        return 1;
    }

    long result = fib_ultimate(n);
    std::cout << "Fibonacci number number " << n << " equally " << result << std::endl;

    return 0;
}
