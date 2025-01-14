//Садрисламов Реваль ПМ-201
#include "det.h"       // Подключаем заголовочный файл, где объявлена функция BFS
#include <iostream>    // Для ввода и вывода данных (std::cin, std::cout)
#include <map>         // Для хранения графа через std::map
#include <vector>      // Для представления списка смежности через std::vector

int main() {
    // Создаём граф как отображение вершин в список смежности
    std::map<int, std::vector<int>> graph;

    int n, m; // Количество вершин (n) и рёбер (m)

    // Запрашиваем у пользователя количество вершин и рёбер
    std::cout << "Enter the number of vertices and edges: ";
    std::cin >> n >> m;

    // Запрашиваем рёбра графа
    std::cout << "Enter the edges (a pair of vertices u v):\n";
    for (int i = 0; i < m; ++i) {
        int u, v;           // Вершины, соединённые ребром
        std::cin >> u >> v; // Пользователь вводит пару вершин

        graph[u].push_back(v); // Добавляем вершину v в список смежности вершины u
        graph[v].push_back(u); // Добавляем вершину u в список смежности вершины v
                               // (Это нужно для неориентированного графа)
    }

    int startVertex; // Стартовая вершина для выполнения BFS
    std::cout << "Enter the starting vertex: ";
    std::cin >> startVertex; // Пользователь вводит стартовую вершину

    // Вызываем функцию BFS для обхода графа, начиная с заданной стартовой вершины
    BFS(graph, startVertex);

    return 0; // Успешное завершение программы
}
