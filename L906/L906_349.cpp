//Невзорова Елена МХ-2
#include <iostream>
#include <vector>
#include <set>
#include "independent_set.h"

using namespace std;

int main() {
    int G, k;

    // Ввод данных: число интервалов и k
    cout << "Enter the number of intervals (G): ";
    cin >> G;

    cout << "Enter the minimum number of non-overlapping intervals (k): ";
    cin >> k;

    // Вызов функции
    IndependentSet(G, k);

    return 0;
}