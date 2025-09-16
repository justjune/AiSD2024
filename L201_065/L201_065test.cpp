// Садрисламов РЕваль Пм-201
#include <iostream>
#include "L201_065.hpp"
using namespace std;

int main() {
    cout << "Test: start testing L201_065\n";
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Начальный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    insertion_sort(arr, n);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Test: test L201_065\n";
    return 0;
}
