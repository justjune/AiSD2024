//Делягин Ф.О ПМ-201
#include <iostream>
#include <queue>
#include "../graph.hpp" // Подключаем заголовочный файл с объявлением графа и функций
#include "../L509_187/L509_187.hpp"
#include "L515_191.hpp"

#define UNCOLORED   0   // Константа для обозначения неокрашенной вершины
#define WHITE       1   // Константа для обозначения белой вершины
#define BLACK       2   // Константа для обозначения черной вершины

using namespace std;

int color[MAXV+1];      // Массив цветов для каждой вершины графа
bool bipartite;         // Флаг, показывающий, является ли граф двудольным

// Возвращает цвет, противоположный текущему
int complement(int color) {
    if (color == WHITE) {
        return(BLACK);
    }

    if (color == BLACK) {
        return(WHITE);
    }
	
    return(UNCOLORED);
}

// Обрабатывает ребро между двумя вершинами
static void process_edge(int x, int y) {
    // Если соседние вершины имеют одинаковый цвет, граф не двудольный
    if (color[x] == color[y]) {
        bipartite = false;
    }

    // Назначаем соседу противоположный цвет
    color[y] = complement(color[x]);
}

// Основная функция для проверки двудольности графа
void twocolor(graph *g) {
    // Ставим всем вершинам статус "неокрашена"
    for (int i = 1; i <= (g->nvertices); i++) { 
        color[i] = UNCOLORED;
    }

    bipartite = true; // Предполагаем, что граф двудольный

    initialize_search(g); // Инициализируем поиск

    // Проверяем каждую компоненту графа
    for (int i = 1; i <= (g->nvertices); i++) {
        if (discovered[i] == false) { // Если вершина еще не была обработана
            color[i] = WHITE; // Начинаем с окрашивания первой вершины в белый цвет
            bfs(g, i, process_edge); // Запускаем BFS для текущей компоненты
        }
    }
}

