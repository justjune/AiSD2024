#include "findmatch.h"
#include <cstring>

// Функция для поиска первой позиции подстроки
int findMatch(const char* pattern, const char* text) {
    int plen = strlen(pattern); // Длина шаблона
    int tlen = strlen(text);    // Длина текста

    // Поиск совпадения
    for (int i = 0; i <= tlen - plen; ++i) {
        int j = 0;
        while (j < plen && text[i + j] == pattern[j]) {
            ++j;
        }
        if (j == plen) {
            return i; // Возвращаем индекс первого совпадения
        }
    }
    return -1; // Если совпадение не найдено
}
