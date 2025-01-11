//Севостьянова Анна МХ-201
#include <iostream>
#include <vector>
#include <set>
#include "EJF.h"

using namespace std;

// Функция для ввода множества элементов
set<int> inputSet(const string& prompt) {
    set<int> result;
    int n;
    cout << prompt << ":Enter the number of items:";
    cin >> n;
    cout << "Enter" << n << "elements separated by a space:";
    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        result.insert(elem);
    }
    return result;
}

// Функция для ввода вектора множеств
vector<set<int>> inputSubsets() {
    int k;
    cout << "Enter the number of subsets: ";
    cin >> k;

    vector<set<int>> subsets(k);

    for (int i = 0; i < k; i++) {
        cout << "A subset " << i + 1 << ": ";
        subsets[i] = inputSet("Enter the elements for the subset");
    }

    return subsets;
}

// Функция для вывода результата
void printCover(const vector<int>& cover) {
    cout << "Indexes of subsets included in the coverage: ";
    for (int i : cover) {
        cout << i + 1 << " ";
    }
    cout << endl;
}

int main() {
    // Ввод множества U
    cout << "Entering the set U"<< endl;
    set<int> U = inputSet("Enter the set U");

    // Ввод подмножеств
    cout << "Entering subsets" << endl;
    vector<set<int>> subsets = inputSubsets();

    // Вызов функции setCover из библиотеки EJF
    vector<int> cover = setCover(subsets, U);

    // Вывод результата
    
    printCover(cover);

    return 0;
}