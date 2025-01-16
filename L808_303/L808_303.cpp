//Севостьянова Анна МХ-201

#include <iostream>
#include <string>
#include "ant.h"

int main() {
    std::string s, t;

    std::cout << "Enter the first line: ";
    std::cin >> s;

    std::cout << "Enter the second line: ";
    std::cin >> t;

    int cost = string_compare(s.c_str(), t.c_str());
    std::cout << "The cost of editing: " << cost << std::endl;

    return 0;
}