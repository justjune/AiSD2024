// Садрисламов Реваль ПМ-201
#include <iostream> // Для ввода-вывода
#include <cstdio>   // Для функции fgets
#include <cstring>  // Для функции strcspn
#include "find.h" // Подключаем заголовок с функцией findmatch

using namespace std;

int main()
{
    char stroka1[100]; // Массив для хранения первой строки (образца)
    char stroka2[100]; // Массив для хранения второй строки (текста)

    // Ввод первой строки
    cout << "Enter the first line (sample): "; // Просим пользователя ввести образец
    fgets(stroka1, sizeof(stroka1), stdin); // Читаем строку из ввода с защитой от переполнения
    stroka1[strcspn(stroka1, "\n")] = '\0'; // Удаляем символ новой строки '\n', если он есть
    // strcspn вычисляет индекс первой встречи символа '\n', и мы заменяем его на '\0'.

    // Ввод второй строки
    cout << "Enter the second line (text): "; // Просим пользователя ввести текст
    fgets(stroka2, sizeof(stroka2), stdin); // Читаем строку из ввода с защитой от переполнения
    stroka2[strcspn(stroka2, "\n")] = '\0'; // Удаляем символ новой строки '\n', если он есть

    // Вызываем функцию findmatch и выводим результат
    int result = findmatch(stroka1, stroka2); // Ищем первую позицию образца в тексте
    if (result != -1) {
        // Если образец найден, выводим его позицию
        cout << "The sample was found at the position: " << result << endl;
    } else {
        // Если образец не найден, сообщаем об этом
        cout << "The sample was not found." << endl;
    }

    return 0; // Успешное завершение программы
}
