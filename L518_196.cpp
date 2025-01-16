

void find_path(int start, int end, int* parent) {
    if (start == end) {
        cout << end;
    }
    else {
        find_path(start, parent[end], parent);
        cout << " -> " << end;
    }
}

void process_edge(int x, int y, int* parent, bool& finished) {
    if (parent[x] != y) {
        cout << "Cycle from " << y << " to " << x << ": ";
        find_path(y, x, parent);
        cout << endl << endl;
        finished = true;
    }
}

