//Ткаченко Илья ПМ-201
#include <iostream>
#include "L203_068.hpp" // Подключение заголовочного файла

using namespace std;

int main() {

    cout << "Test: start testing L203_068\n";
    cout << "Не имеет совпадений: Строка \"asda\", Паттерн \"ds\", Результат: " << findmatch("ds", "asda") << endl;
    cout << "Имеет совпадений: Строка \"asda\", Паттерн \"sd\", Результат: " << findmatch("sd", "asda") << endl;


    return 0;
}