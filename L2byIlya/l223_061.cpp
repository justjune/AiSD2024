
//Ткаченко Илья ПМ-201
#include <iostream>
#include <string>
#include "findmatch.h" // Подключение заголовочного файла

using namespace std;

int main() {
    string str1, str2;

    // Ввод строк
    cout << "Enter the first line:";
    getline(cin, str1);
    cout << "Enter the second line:";
    getline(cin, str2);

    // Поиск подстроки
    int result = findMatch(str1.c_str(), str2.c_str());
    if (result != -1) {
        cout << "Substring found at the position: " << result << endl;
    } else {
        cout << "The substring was not found." << endl;
    }

    return 0;
}