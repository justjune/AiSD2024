#include "L808_303.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Test: start testing L808_303\n";
    const char s[] = "kitten";
    const char t[] = "sitting";

    int cost = string_compare(s, t);

    std::cout << "Стоимость редактирования строки \"" << s
              << "\" в строку \"" << t << "\": " << cost << std::endl;
    cout << "Test: test L808_303 finished\n";
    return 0;
}