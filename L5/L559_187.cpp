//Садрисламов Реваль ПМ-201
#include "det.h"       // Подключаем заголовочный файл с объявлением функций BFS и bfs
#include <iostream>    // Для ввода и вывода данных (std::cin, std::cout)
#include <map>         // Для представления графа через std::map
#include <vector>      // Для хранения списка смежности через std::vector

int main() {
    // Граф представлен как отображение (map) каждой вершины в список её соседей
    std::map<int, std::vector<int>> graph;

    int n, m; // Количество вершин (n) и рёбер (m)

    // Запрашиваем у пользователя количество вершин и рёбер
    std::cout << "Enter the number of vertices and edges: ";
    std::cin >> n >> m;

    // Ввод рёбер графа
    std::cout << "Enter the edges (a pair of vertices u v):\n";
    for (int i = 0; i < m; ++i) {
        int u, v;           // Две вершины, соединённые ребром
        std::cin >> u >> v; // Пользователь вводит вершины u и v

        graph[u].push_back(v); // Добавляем вершину v в список смежности вершины u
        graph[v].push_back(u); // Добавляем вершину u в список смежности вершины v
                               // (Эта строка нужна только для неориентированного графа)
    }

    int startVertex; // Вершина, с которой начнётся обход графа
    std::cout << "Enter the starting vertex: ";
    std::cin >> startVertex; // Пользователь вводит стартовую вершину

    bool isDirected; // Флаг, указывающий, является ли граф ориентированным
    std::cout << "Is the graph oriented? (1 - Yes, 0 - No): ";
    std::cin >> isDirected; // Пользователь вводит 1 (Да) или 0 (Нет)

    // Вызываем функцию bfs для обхода графа
    // graph - граф в виде списка смежности
    // startVertex - вершина, с которой начинается обход
    // isDirected - флаг ориентированности графа
    bfs(graph, startVertex, isDirected);

    return 0; // Завершаем программу
}
