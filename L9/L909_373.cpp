//Cадрисламов Реваль ПМ-201
// запускал так cd C:/Users/sadri/OneDrive/Документы/GitHub/oopdz/L9      mingw32-make -f L9.mk


#include <iostream>  // Подключение стандартной библиотеки ввода-вывода
#include <vector>    // Подключение библиотеки для работы с векторами
#include <set>       // Подключение библиотеки для работы с множествами
#include "cont.h"     // Подключение пользовательского заголовочного файла, где реализована функция findSetCover

using namespace std; // Использование стандартного пространства имен для упрощения записи

// Функция для ввода множества от пользователя
set<int> inputSet() {
    set<int> resultSet; // Множество для хранения элементов
    int elementCount, element;

    // Запрос количества элементов во множестве
    cout << "Enter the number of elements in the set: ";
    cin >> elementCount;

    // Запрос самих элементов и добавление их в множество
    cout << "Enter " << elementCount << " elements: ";
    for (int i = 0; i < elementCount; ++i) {
        cin >> element;      // Чтение элемента
        resultSet.insert(element); // Добавление элемента во множество
    }

    return resultSet; // Возврат введенного множества
}

// Функция для ввода всех подмножеств от пользователя
vector<set<int>> inputSubsets() {
    vector<set<int>> allSubsets; // Вектор для хранения подмножеств
    int subsetCount;            // Количество подмножеств

    // Запрос количества подмножеств
    cout << "Enter the number of subsets: ";
    cin >> subsetCount;

    // Цикл для ввода каждого подмножества
    for (int i = 1; i <= subsetCount; ++i) {
        cout << "Input elements of subset " << i << ":" << endl;
        allSubsets.push_back(inputSet()); // Чтение подмножества и добавление его в вектор
    }

    return allSubsets; // Возврат вектора подмножеств
}

int main() {
    // Ввод универсального множества
    cout << "Provide the universal set U:" << endl;
    set<int> universalSet = inputSet(); // Считываем универсальное множество

    // Ввод подмножеств
    cout << "Now, provide the subsets:" << endl;
    vector<set<int>> subsetsList = inputSubsets(); // Считываем список подмножеств

    // Решение задачи покрытия множества с помощью жадного алгоритма
    vector<int> minimalCover = setCover(subsetsList, universalSet); // Получаем индексы подмножеств, которые покрывают универсальное множество

    // Вывод результата
    if (!minimalCover.empty()) { // Если решение найдено
        cout << "Minimal set cover includes the following subsets:" << endl;

        // Перебор индексов найденных подмножеств
        for (int idx : minimalCover) {
            cout << "Subset " << idx + 1 << ": {"; // Печатаем номер подмножества (индекс + 1 для читаемости)

            // Получаем само подмножество по индексу
            const set<int>& subset = subsetsList[idx];

            // Выводим элементы подмножества
            for (auto itr = subset.begin(); itr != subset.end(); ++itr) {
                if (itr != subset.begin()) cout << ", "; // Печатаем запятую между элементами
                cout << *itr; // Вывод текущего элемента
            }

            cout << "}" << endl; // Закрываем фигурную скобку
        }
    } else {
        // Если покрытие не найдено, выводим сообщение об ошибке
        cout << "No set cover found. Universal set cannot be covered with the provided subsets." << endl;
    }

    return 0; // Завершаем программу
}
