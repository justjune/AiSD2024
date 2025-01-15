#include <iostream>  // Для cout и endl
#include <vector>    // Для vector
#include <set>       // Для set
#include "l901.h" 
#include "EJF.h"   // Для объявления функции Bandersnatch

using namespace std; // Использование пространства имен std

// Функция для решения задачи "Bandersnatch"
void Bandersnatch(const vector<set<int>>& graph) {
    // Преобразование графа G в экземпляр задачи "Bo-billy"
    // Собираем все уникальные элементы из всех подмножеств в единое множество (universe)
    set<int> universe;
    for (const auto& subset : graph) {
        universe.insert(subset.begin(), subset.end()); // Добавляем элементы из каждого подмножества
    }

    // Вызов процедуры "Bo-billy" для решения задачи покрытия множества
    // Используем функцию setCover из EJF.cpp
    vector<int> result = setCover(graph, universe);

    // Вывод результата в виде списка индексов подмножеств, входящих в покрытие
    cout << "Результат Bandersnatch: ";
    for (int idx : result) {
        cout << idx << " "; // Печатаем индексы выбранных подмножеств
    }
    cout << endl;
}
