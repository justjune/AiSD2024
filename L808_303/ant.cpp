#include "ant.h"
#include <cstring>
#include <vector>
#include <algorithm>

#define MATCH 0
#define INSERT 1
#define DELETE 2

int indel(char c) {
    return 1; // Стоимость вставки/удаления
}

int match(char c1, char c2) {
    return (c1 == c2) ? 0 : 1; // Стоимость совпадения или замены
}

void row_init(std::vector<std::vector<Cell>>& m, int i) {
    m[i][0].cost = i * indel(' ');
    m[i][0].parent = DELETE;
}

void column_init(std::vector<std::vector<Cell>>& m, int j) {
    m[0][j].cost = j * indel(' ');
    m[0][j].parent = INSERT;
}

int string_compare(const char* s, const char* t) {
    int len_s = std::strlen(s);
    int len_t = std::strlen(t);

    // Создаем матрицу для хранения стоимости и родительских операций
    std::vector<std::vector<Cell>> m(len_s + 1, std::vector<Cell>(len_t + 1));

    // Инициализируем строки и столбцы
    for (int i = 0; i <= len_s; ++i) row_init(m, i);
    for (int j = 0; j <= len_t; ++j) column_init(m, j);

    // Вычисляем стоимость редактирования
    for (int i = 1; i <= len_s; ++i) {
        for (int j = 1; j <= len_t; ++j) {
            int opt[3];
            opt[MATCH] = m[i - 1][j - 1].cost + match(s[i - 1], t[j - 1]);
            opt[INSERT] = m[i][j - 1].cost + indel(t[j - 1]);
            opt[DELETE] = m[i - 1][j].cost + indel(s[i - 1]);

            m[i][j].cost = opt[MATCH];
            m[i][j].parent = MATCH;

            for (int k = INSERT; k <= DELETE; ++k) {
                if (opt[k] < m[i][j].cost) {
                    m[i][j].cost = opt[k];
                    m[i][j].parent = k;
                }
            }
        }
    }

    // Возвращаем итоговую стоимость
    return m[len_s][len_t].cost;
}