
const int MAX_V = 1000;
vector<int> low(MAX_V + 1); 
vector<int> scc(MAX_V + 1, -1); 
int components_found = 0; 

stack<int> Sactive; 

void strong_components(graph* g) {
    initialize_search(g);

    for (int i = 1; i <= g->nvertices; ++i) {
        if (discovered[i] == false) {
            dfs(g, i);
        }
    }
}

int main() {
    graph* g = 
        strong_components(g);

    return 0;
}
