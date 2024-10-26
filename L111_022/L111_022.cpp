#include <iostream>
#include "insertion_sort.h"
using namespace std;

int main() {
  int arr[] = {12, 4, 43, -3, 3, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  cout << "Исходный массив: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    cout << endl;
  insertion_sort(arr, n);
  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    cout << endl;
    return 0;
  }