    //Реализация алгоритма Форда-Фалкерсона
    #include <iostream>
    #include <vector>
    #include <queue>//очередь
    #include <climits>//библиотека для определния пределов целочисленных типов (INT_MAX)

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


    //поиск в ширину
    //Функция bfs выполняет обход в ширину для поиска увеличивающего пути от source до sink.
    int bfs(const FlowGraph& g, int source, int sink, std::vector<int>& parent) {
        //принимает граф g, вершину источника,
        //вершину стока и вектор parent, который будет хранить пути.
        std::fill(parent.begin(), parent.end(), -1);//Инициализируем parent значениями -1, чтобы обозначить, что все вершины изначально не посещены.
        //Устанавливаем parent[source] в -2, чтобы отметить, что это источник.
        parent[source] = -2; // Отметим источник
        std::queue<std::pair<int, int>> q;
        q.emplace(source, INT_MAX);
        //Создаём очередь q, в которую будем добавлять пары вершин и минимальный поток.
        //  Начинаем с источника, при этом минимальный поток инициализируется INT_MAX.

        while (!q.empty()) {//Запускаем цикл, пока очередь не пуста.
            int current = q.front().first;//Берём из очереди первую пару: current — текущая вершина, flow — минимальный доступный поток.
            int flow = q.front().second;//Перебираем все рёбра, исходящие из текущей вершины.
            q.pop();

            for (const Edge& edge : g.getAdj(current)) {
                if (parent[edge.to] == -1 && edge.flow < edge.capacity) {
                    //Проверяем, не посещена ли вершина edge.to и есть ли в ребре доступный объём
                    //(т.е. текущий поток меньше максимальной пропускной способности).
                    parent[edge.to] = current;
                    //Устанавливаем родителя для вершины edge.to — это текущая вершина.
                    int new_flow = std::min(flow, edge.capacity - edge.flow);
                    //Рассчитываем новый поток, который может пройти через ребро, как минимум между текущим потоком и доступным объёмом ребра.
                    if (edge.to == sink) {
                        return new_flow; //Если достигли стока, возвращаем найденный поток.
                    }
                    q.emplace(edge.to, new_flow);//Добавляем вершину edge.to и новый поток в очередь для дальнейшей обработки.
                }
            }
        }
        return 0; //Если очередь пустая и не нашли путь до стока, возвращаем 0.
    }

    void augmentPath(FlowGraph& g, int source, int sink, const std::vector<int>& parent, int flow) {
        //Функция augmentPath увеличивает поток по найденному пути.Она принимает граф g, источник source, сток sink, вектор parent и поток flow.
        int current = sink;
        while (current != source) {
            //Начинаем с вершины стока и движемся к источнику, пока не достигнем его.
            int prev = parent[current];//Запоминаем родителя текущей вершины.
            for (Edge& edge : g.getAdj(prev)) {//Проходим по всем рёбрам, исходящим из prev, и увеличиваем поток для ребра, которое ведёт в current.
                if (edge.to == current) {
                    edge.flow += flow; // Увеличиваем поток
                }
            }
            for (Edge& edge : g.getAdj(current)) {
                if (edge.to == prev) {
                    edge.flow -= flow; // Уменьшаем поток в обратном ребре, чтобы учесть новое состояние графа.
                }
            }
            current = prev;//Переходим к родителю, чтобы продолжить увеличение потока по всему пути
        }
    }
    //Основная Функция по Поиску Потока
    int netflow(FlowGraph& g, int source, int sink) {//Функция netflow — основная, которая запускает алгоритм поиска максимального потока.
        //Она принимает граф g, источник source и сток sink.
        std::vector<int> parent(g.size());//Инициализируем вектор parent размером с количество вершин, чтобы отслеживать пути.
        //Переменная maxFlow для хранения общего потока, и flow для хранения потока в текущем итерации.
        int maxFlow = 0, flow;

        while (true) {//Бесконечный цикл, который будет продолжаться до тех пор, пока находятся увеличивающие пути
            flow = bfs(g, source, sink, parent);//Вызываем bfs для поиска увеличивающего пути. Если поток равен 0, выходим из цикла.
            if (flow == 0) {
                break; // Нет увеличивающего пути
            }
            maxFlow += flow;
            augmentPath(g, source, sink, parent, flow);//Увеличиваем общий поток на найденный и увеличиваем поток по найденному пути.
        }

        return maxFlow;//Возвращаем максимальный поток после завершения алгоритма.
    }

    int main() {//В main создаём экземпляр графа с 6 вершинами
        setlocale(LC_ALL, "RU");
        FlowGraph g(6); // Пример: 6 вершин
        g.addEdge(0, 1, 16);
        g.addEdge(0, 2, 13);
        g.addEdge(1, 2, 10);
        g.addEdge(1, 3, 12);
        g.addEdge(2, 1, 4);
        g.addEdge(2, 4, 14);
        g.addEdge(3, 2, 9);
        g.addEdge(3, 5, 20);
        g.addEdge(4, 3, 7);
        g.addEdge(4, 5, 4);

        int maxFlow = netflow(g, 0, 5);
        std::cout << "Максимальный поток: " << maxFlow << std::endl;

        return 0;
    }
