//Невзорова Елена МХ-2
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

// Функция для поиска минимальной стоимости маршрута с использованием жадного подхода
int tsp(vector<vector<int>>& graph, vector<bool>& visited, int currPos, int n, int count, int cost, int& minCost) {
    // Если все города посещены и есть путь обратно в исходный город
    if (count == n && graph[currPos][0]) {
        minCost = min(minCost, cost + graph[currPos][0]); // Обновляем минимальную стоимость маршрута
        return minCost;
    }

    // Перебираем все города
    for (int i = 0; i < n; i++) {
        // Проверяем, можно ли перейти в город i
        if (!visited[i] && graph[currPos][i]) {
            visited[i] = true; // Помечаем город как посещенный
            // Рекурсивный вызов для следующего города
            tsp(graph, visited, i, n, count + 1, cost + graph[currPos][i], minCost);
            visited[i] = false; // Отменяем посещение города для следующей итерации
        }
    }
    return minCost; // Возвращаем минимальную стоимость маршрута
}

int main() {
    int n; // Переменная для хранения количества городов
    cout << "Введите количество городов: ";
    cin >> n; // Ввод количества городов

    // Создаем матрицу смежности для представления графа
    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Введите матрицу смежности графа (весовые матрицы):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j]; // Ввод весов между городами
        }
    }

    // Вектор для отслеживания посещенных городов
    vector<bool> visited(n, false);
    visited[0] = true; // Начинаем с первого города

    int minCost = INT_MAX; // Инициализируем минимальную стоимость маршрута максимальным значением

    // Вызываем функцию для нахождения минимальной стоимости маршрута
    minCost = tsp(graph, visited, 0, n, 1, 0, minCost);

    // Выводим минимальную стоимость маршрута
    cout << "Минимальная стоимость маршрута: " << minCost << endl;

    return 0; // Завершение программы
}
