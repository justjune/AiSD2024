//Севостьянова Анна МХ-201

#include <iostream>
#include <vector>
#include <set>
#include "EJF.h" // Предполагая, что функция set Cover реализована в этом файле
using namespace std;

// Функция для считывания набора
set<int> readSet() {
    set<int> result;
    int n, x;
    cout << "Enter the number of elements in the set: ";
    cin >> n;
    cout << "Enter " << n << " elements of the set: ";
    for (int i = 0; i < n; ++i) {
        cin >> x;
        result.insert(x);
    }
    return result;
}

// Функция для чтения всех подмножеств
vector<set<int>> readSubsets() {
    vector<set<int>> subsets;
    int m;// количество подмножеств
    cout << "Enter the number of subsets: ";
    cin >> m;

    for (int i = 0; i < m; ++i) {
        cout << "Subset " << i + 1 << ":" << endl;
        subsets.push_back(readSet());
    }

    return subsets;
}

int main() {
    // Ознакомьтесь с универсальным набором U
    cout << "Enter the universal set U:" << endl;
    set<int> U = readSet();

    // Считывание подмножеств
    cout << "Now, enter the subsets:" << endl;
    vector<set<int>> subsets = readSubsets();

    // Примените жадный алгоритм к задаче о заданном покрытии
    vector<int> cover = setCover(subsets, U);

   // Вывести результат
    if (!cover.empty()) {
        cout << "The minimal set cover is achieved by the following subsets:" << endl;
        for (int index : cover) {
            cout << "Subset " << index + 1 << ": {";
            const set<int>& subset = subsets[index];
            for (auto it = subset.begin(); it != subset.end(); ++it) {
                if (it != subset.begin()) cout << ", ";
                cout << *it;
            }
            cout << "}" << endl;
        }
    } else {
        cout << "No cover found. The universal set cannot be covered by the given subsets." << endl;
    }

    return 0;
}