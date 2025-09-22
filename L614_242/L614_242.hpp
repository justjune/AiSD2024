#ifndef L614_242_HPP
#define L614_242_HPP

#include <vector>

struct Edge {//структура для ребра графа(вершина,макс.пропускная способность ребра,текущий поток через ребро)
        int to, capacity, flow;
};

class FlowGraph {//определяем граф потока,принимаем количество вершин и инициализируем вектор adj, который будет хранить список смежности.
public:
    FlowGraph(int vertices) : adj(vertices) {}

    void addEdge(int from, int to, int capacity) {//Метод addEdge добавляет ребро между двумя вершинами from и to с заданной пропускной способностью.
        adj[from].push_back({ to, capacity, 0 });
        adj[to].push_back({ from, 0, 0 }); //Также создаётся обратное ребро с нулевой пропускной способностью, что необходимо для алгоритма Форда-Фалкерсона.
    }

    const std::vector<Edge>& getAdj(int vertex) const {
        return adj[vertex];//Метод getAdj возвращает список рёбер, исходящих из заданной вершины vertex.
    }

    std::vector<Edge>& getAdj(int vertex) {
        //Перегруженный метод getAdj, который возвращает ссылку на список рёбер (без const)
        return adj[vertex];//позволяя изменять рёбра при необходимости.
    }

    int size() const {//Метод size возвращает количество вершин в графе.
        return adj.size();
    }

private:
    std::vector<std::vector<Edge>> adj;
};//определили класс

int netflow(FlowGraph& g, int source, int sink);//Функция netflow — основная, которая запускает алгоритм поиска максимального потока.

#endif