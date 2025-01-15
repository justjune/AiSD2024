#include "myfunc.h"

// Функция сортировки массива вставками
void sortArray(int s[], int n) {
    for (int i = 1; i < n; ++i) {
        int current = s[i];
        int j = i - 1;

        // Сдвигаем элементы, пока находим больший
        while (j >= 0 && s[j] > current) {
            s[j + 1] = s[j];
            --j;
        }
        s[j + 1] = current;
    }
}
