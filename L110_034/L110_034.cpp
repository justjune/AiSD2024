#include <iostream>
#include "increment.h"
int main() {
  int y;
  std::cout << "Введите значение y: ";
  std::cin >> y;

  int result = increment(y);
  std::cout << "Результат: " << result << std::endl;

  return 0;
}
