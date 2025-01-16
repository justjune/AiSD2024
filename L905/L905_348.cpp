//Невзорова МХ-2
#include <iostream>
#include <vector>
#include <set>
#include <sstream> // Для обработки пользовательского ввода
#include "independent_set.h" // Заголовочный файл для функции IndependentSetToVertexCover


int main() {
    int n, k;

    // Ввод количества вершин в графе
    std::cout << "Enter the number of vertices in the graph: ";
    std::cin >> n;

    // Ввод списка смежности графа
    std::vector<std::set<int>> graph(n);
    std::cout << "Enter the edges of the graph in the 'u v' format (numbering from 0). Enter 'end' to complete:\n";
    std::string input;
    std::cin.ignore(); // Игнорируем остаток от предыдущего ввода
    while (true) {
        std::getline(std::cin, input);
        if (input == "end") {
            break;
        }

        std::istringstream iss(input);
        int u, v;
        if (!(iss >> u >> v)) {
            std::cout << "Incorrect format. Try again.\n";
            continue;
        }
        if (u < 0 || u >= n || v < 0 || v >= n || u == v) {
            std::cout << "Invalid vertices. Try again.\n";
            continue;
        }

        graph[u].insert(v);
        graph[v].insert(u); // Для неориентированного графа добавляем обе стороны
    }

    // Ввод размера независимого множества
    std::cout << "Enter the size of the independent set (k): ";
    std::cin >> k;

    // Проверяем, существует ли независимое множество из k вершин
    if (IndependentSetToVertexCover(graph, k)) {
        std::cout << "There is an independent set of " << k << " vertices.\n";
    } else {
        std::cout << "There is no independent set of " << k << " vertices.\n";
    }

    return 0;
}
