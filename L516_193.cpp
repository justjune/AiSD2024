


const int MAXN = 1000;
vector<int> adj[MAXN];
vector<string> state(MAXN, "undiscovered");
vector<int> entry(MAXN, 0);
vector<int> exit(MAXN, 0);
vector<int> p(MAXN);
int time = 0;

void DFS(int u) {
    state[u] = "discovered";
    entry[u] = time;
    time++;

    for (int v : adj[u]) {
        if (state[v] == "undiscovered") {
            p[v] = u;
            DFS(v);
        }
    }

    state[u] = "processed";
    exit[u] = time;
    time++;
}



