//L517_194
//обход в глубину
//мх-201 Загайнов Денис Валерьевич

int time = 0;
bool finished = false;

void dfs(graph* g, int v, vector<bool>& discovered, vector<bool>& processed, vector<int>& parent, vector<int>& entry_time, vector<int>& exit_time) {
    if (finished) return;
    discovered[v] = true;
    time++;
    entry_time[v] = time;
    process_vertex_early(v);

    EdgeNode* p = g->edges[v];
    while (p != NULL) {
        int y = p->y;
        if (!discovered[y]) {
            parent[y] = v;
            process_edge(v, y);
            dfs(g, y, discovered, processed, parent, entry_time, exit_time);
        }
        else if (!processed[y] || g->directed) {
            process_edge(v, y);
        }
        if (finished) return;
        p = p->next;
    }

    process_vertex_late(v);
    time++;
    exit_time[v] = time;
    processed[v] = true;
}
