
void process_vertex_late(int v, int* parent, int* tree_out_degree, int* reachable_ancestor, int* entry_time) {
    bool root;
    int time_v, time_parent;

    if (parent[v] < 1) {
        if (tree_out_degree[v] > 1) {
            cout << "root articulation vertex: " << v << endl;
        }
        return;
    }

    root = (parent[parent[v]] < 1);

    if (reachable_ancestor[v] == parent[v] && !root) {
        cout << "parent articulation vertex: " << parent[v] << endl;
    }

    if (reachable_ancestor[v] == v) {
        cout << "bridge articulation vertex: " << parent[v] << endl;
        if (tree_out_degree[v] > 0) {
            cout << "bridge articulation vertex: " << v << endl;
        }
    }

    time_v = entry_time[reachable_ancestor[v]];
    time_parent = entry_time[reachable_ancestor[parent[v]]];

    if (time_v < time_parent) {
        reachable_ancestor[parent[v]] = reachable_ancestor[v];
    }
}


