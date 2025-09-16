#include "L201_065.hpp"

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i]; // сохр. текущ. эл-нт в переменной кей
    int j = i - 1; // индекс предыдущего эл-нта

    // Перемещаем элементы, большие чем key, на один шаг вправо
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}