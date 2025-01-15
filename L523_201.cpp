
const int MAX_V = 1000;
vector<vector<int>> adj(MAX_V); 
vector<string> state(MAX_V, "undiscovered");

void DFS(int v) {
    state[v] = "discovered";
    

    for (int u : adj[v]) {
        if (state[u] == "undiscovered") {
            
            DFS(u);
        }
    }
}

void DFS_graph(vector<vector<int>>& G) {
    for (int u = 0; u < G.size(); ++u) {
        state[u] = "undiscovered";
    }

    for (int u = 0; u < G.size(); ++u) {
        if (state[u] == "undiscovered") {
            
            DFS(u);
        }
    }
}

int main() {
    vector<vector<int>> graph;

   

    DFS_graph(graph);

    return 0;
}
