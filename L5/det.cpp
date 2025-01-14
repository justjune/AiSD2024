#include "det.h"       
#include <iostream>    
#include <queue>       // Для реализации очереди std::queue
#include <map>         // Для хранения состояний и родителей через std::map
#include <vector>      // Для представления списка смежности графа
#include <string>      // Для хранения строковых состояний вершин

// Реализация алгоритма обхода графа в ширину (BFS)
void BFS(const std::map<int, std::vector<int>>& graph, int startVertex) {
    std::map<int, std::string> state; // Хранит состояние каждой вершины: "undiscovered", "discovered", "processed"
    std::map<int, int> parent;       // Хранит родителя каждой вершины
    std::queue<int> Q;               // Очередь для обработки вершин в BFS

    // Инициализация всех вершин
    for (auto it = graph.begin(); it != graph.end(); ++it) {
        int vertex = it->first;         // Текущая вершина
        state[vertex] = "undiscovered"; // Все вершины изначально не открыты
        parent[vertex] = -1;            // У всех вершин нет родителя на начальном этапе
    }

    // Устанавливаем состояние для стартовой вершины
    state[startVertex] = "discovered"; // Стартовая вершина считается открытой
    parent[startVertex] = -1;          // У стартовой вершины нет родителя
    Q.push(startVertex);               // Добавляем стартовую вершину в очередь

    // Основной цикл BFS
    while (!Q.empty()) {
        int u = Q.front(); // Извлекаем вершину из начала очереди
        Q.pop();           // Удаляем её из очереди

        std::cout << "Обработка вершины: " << u << std::endl; // Сообщаем о текущей вершине

        // Обходим всех соседей текущей вершины
        for (int v : graph.at(u)) {
            std::cout << "    Ребро (" << u << ", " << v << ")\n"; // Выводим ребро

            // Если соседняя вершина ещё не была открыта
            if (state[v] == "undiscovered") {
                state[v] = "discovered"; // Помечаем вершину как открытую
                parent[v] = u;          // Устанавливаем родителя для этой вершины
                Q.push(v);              // Добавляем её в очередь
            }
        }

        state[u] = "processed"; // Помечаем текущую вершину как обработанную
    }

    // Выводим родителей для всех вершин
    std::cout << "\nРодители вершин:\n";
    for (auto it = parent.begin(); it != parent.end(); ++it) {
        int vertex = it->first; // Текущая вершина
        int par = it->second;   // Родитель текущей вершины
        // Если у вершины нет родителя, выводим "нет"
        std::cout << "Вершина " << vertex << ": Родитель " 
                  << (par == -1 ? "нет" : std::to_string(par)) << std::endl;
    }
}
