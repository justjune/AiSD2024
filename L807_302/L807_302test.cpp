#include "L807_302.hpp"
#include <iostream>


using namespace std;
int main() {

    cout << "Test: start testing L807_302\n";
    // Инициализация таблицы значениями по умолчанию
    initializeTable();

    // Вывод сообщения о начале таблицы
    std::cout << "Dynamic Programming Table:" << std::endl;

    // Печать содержимого таблицы на экран
    printTable();
    cout << "Test: test L807_302 finished\n";

    // Завершаем выполнение программы
    return 0;
}