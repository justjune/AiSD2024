// Функция для вычисления расстояния редактирования
// Параметры:
// S - исходная последовательность
// T - целевая последовательность
// C_ins - стоимость вставки
// C_del - стоимость удаления
#include <vector>    // Добавлено для использования std::vector
#include <algorithm> // Добавлено для использования std::sort и std::min
#include <climits>   // Добавлено для использования INT_MIN
#include "l902.h"

using namespace std;

int EditDistance(const vector<int>& S, const vector<int>& T, int C_ins, int C_del) {
    int n = S.size();
    int m = T.size();

    // Таблица для хранения промежуточных результатов
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Инициализация таблицы
    for (int i = 0; i <= n; ++i) dp[i][0] = i * C_del;
    for (int j = 0; j <= m; ++j) dp[0][j] = j * C_ins;

    // Заполнение таблицы динамического программирования
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j] + C_del,  // Удаление
                               dp[i][j - 1] + C_ins); // Вставка
            }
        }
    }

    // Возвращаем итоговое расстояние редактирования
    return dp[n][m];
}

vector<int> LongestIncreasingSubsequence(const vector<int>& S) {
    vector<int> T = S;
    sort(T.begin(), T.end());
    T.erase(unique(T.begin(), T.end()), T.end());

    const int C_ins = 1;
    const int C_del = 1;

    int editDist = EditDistance(S, T, C_ins, C_del);

    int lisLength = S.size() - editDist / 2;

    vector<int> lis;
    int prev = INT_MIN;

    for (int num : S) {
        if (binary_search(T.begin(), T.end(), num) && num > prev) {
            lis.push_back(num);
            prev = num;
        }
    }

    return lis;
}