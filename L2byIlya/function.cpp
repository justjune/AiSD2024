#include "function.h"

void sortArray(int array[], int length) {
    for (int i = 1; i < length; ++i) {
        int temp = array[i];
        int j = i - 1;

        // Сдвигаем элементы массива, которые больше текущего элемента
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = temp; // Вставляем текущий элемент на своё место
    }
}
