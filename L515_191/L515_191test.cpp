#include <iostream>
#include "L515_191.hpp"

using namespace std;

int main() {
    cout << "Test: start testing L515_191\n";
    graph g; // Объект графа
    int i;

    initialize_graph(&g, false);

    g.nvertices = 6;
    insert_edge(&g, 1, 2, 5, false);
    insert_edge(&g, 1, 3, 7, false);
    insert_edge(&g, 2, 4, 2, false);
    insert_edge(&g, 3, 5, 4, false);
    insert_edge(&g, 4, 6, 8, false);
    print_graph(&g); // Выводим граф для проверки

    twocolor(&g); // Проверяем двудольность графа

    // Выводим цвета всех вершин
    for (i = 1; i <= (g.nvertices); i++) {
        cout << ' ' << color[i];
    }
    cout << '\n';
    cout << "Test: test L515_191 finished\n";
    return 0; // Завершаем выполнение программы
}