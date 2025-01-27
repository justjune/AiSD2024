//L524_204
//топологическая сортировка
//мх-201 Лазуков Никита Владимирович


const int MAX_V = 1000;
vector<int> sorted; 
stack<int> stk; 

void push(stack<int>* s, int v) {
    s->push(v);
}

void dfs_for_topsort(vector<vector<int>>& adj, vector<int>& discovered, int v) {
    discovered[v] = true;

    for (int u : adj[v]) {
        if (!discovered[u]) {
            dfs_for_topsort(adj, discovered, u);
        }
    }

    push(&stk, v);
}

void process_vertex_late(int v) {
    push(&sorted, v);
}

void process_edge(int x, int y, vector<int>& parent, bool& finished, vector<int>& entry_time) {
    int classification = edge_classification(x, y, parent);
    if (classification == BACK) {
        cout << "Warning: directed cycle found, not a DAG" << endl;
        finished = true;
    }
}

void topsort(vector<vector<int>>& graph, vector<int>& discovered, vector<int>& parent, bool& finished, vector<int>& entry_time) {
    for (int i = 0; i < graph.size(); ++i) {
        if (!discovered[i]) {
            dfs_for_topsort(graph, discovered, i);
        }
    }

    while (!stk.empty()) {
        process_vertex_late(stk.top());
        stk.pop();
    }

    
    for (int v : sorted) {
        cout << v << " ";
    }
    cout << endl;
}

