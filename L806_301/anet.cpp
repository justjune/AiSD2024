#include "anet.h"
#include <cstring>

int indel(char c) {
    return 1; // Стоимость вставки/удаления символа
}

int match(char c1, char c2) {
    return (c1 == c2) ? 0 : 1; // Стоимость совпадения или замены символа
}

int string_compare(const char *s, const char *t, int i, int j) {
    if (i == 0) return j * indel(' ');
    if (j == 0) return i * indel(' ');

    int opt[3];
    opt[MATCH] = string_compare(s, t, i - 1, j - 1) + match(s[i - 1], t[j - 1]);
    opt[INSERT] = string_compare(s, t, i, j - 1) + indel(t[j - 1]);
    opt[DELETE] = string_compare(s, t, i - 1, j) + indel(s[i - 1]);

    int lowest_cost = opt[MATCH];
    for (int k = INSERT; k <= DELETE; ++k) {
        if (opt[k] < lowest_cost) lowest_cost = opt[k];
    }

    return lowest_cost;
}