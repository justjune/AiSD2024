//Невзорова Елена МХ-2
#include <iostream>
#include <vector>
#include <set>
#include "l901.h"
#include "EJF.h"
using namespace std;

int main() {
    int numSubsets;
    cout << "Enter the number of subsets: ";
    cin >> numSubsets;

    vector<set<int>> graph(numSubsets);
    
    for (int i = 0; i < numSubsets; ++i) {
        int numElements;
        cout << "Enter the number of elements in the subset " << i + 1 << ": ";
        cin >> numElements;

        cout << "Enter the elements of the subset " << i + 1 << ": ";
        for (int j = 0; j < numElements; ++j) {
            int element;
            cin >> element;
            graph[i].insert(element);
        }
    }

    // Вызов функции Bandersnatch для обработки графа
    Bandersnatch(graph);

    return 0;
}

