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

        std::cout << "Vertex processing: " << u << std::endl; // Сообщаем о текущей вершине

        // Обходим всех соседей текущей вершины
        for (int v : graph.at(u)) {
            std::cout << "    Edge (" << u << ", " << v << ")\n"; // Выводим ребро

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
    std::cout << "\nThe parents of the vertices:\n";
    for (auto it = parent.begin(); it != parent.end(); ++it) {
        int vertex = it->first; // Текущая вершина
        int par = it->second;   // Родитель текущей вершины
        // Если у вершины нет родителя, выводим "нет"
        std::cout << "Top " << vertex << ": Parents " 
                  << (par == -1 ? "no" : std::to_string(par)) << std::endl;
    }
}




// L559_187
void bfs(const std::map<int, std::vector<int>>& graph, int startVertex, bool isDirected) {
    std::queue<int> Q;              // Очередь для обработки вершин
    std::map<int, bool> discovered; // Указывает, была ли вершина открыта
    std::map<int, bool> processed;  // Указывает, была ли вершина обработана
    std::map<int, int> parent;      // Родители вершин

    // Инициализация всех вершин
    for (const auto& vertex : graph) {
        discovered[vertex.first] = false;
        processed[vertex.first] = false;
        parent[vertex.first] = -1;
    }

    // Обработка стартовой вершины
    Q.push(startVertex);
    discovered[startVertex] = true;

    while (!Q.empty()) {
        int v = Q.front(); // Извлекаем вершину
        Q.pop();

        // Раннее выполнение действий с вершиной (можно кастомизировать)
        std::cout << "Early execution for a vertex" << v << std::endl;
        processed[v] = true;

        // Обрабатываем всех соседей вершины
        for (int y : graph.at(v)) {
            if (!processed[y] || isDirected) {
                // Обработка рёбер (можно кастомизировать)
                std::cout << "Edge processing (" << v << ", " << y << ")" << std::endl;
            }
            if (!discovered[y]) {
                Q.push(y);
                discovered[y] = true;
                parent[y] = v;
            }
        }

        // Позднее выполнение действий с вершиной (можно кастомизировать)
        std::cout << "Late execution for a vertex " << v << std::endl;
    }

    // Вывод родителей для каждой вершины
    std::cout << "\nThe parents of the vertices:\n";
    for (const auto& entry : parent) {
        int vertex = entry.first;
        int par = entry.second;
        std::cout << "Top " << vertex << ": Parents " 
                  << (par == -1 ? "no" : std::to_string(par)) << std::endl;
    }
}
