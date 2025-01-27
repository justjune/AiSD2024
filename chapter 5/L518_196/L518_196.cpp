//L518_196
//поиск цикла
//мх-201 Лазуков Никита Владимирович

void process_edge(int x, int y, int* parent, bool& finished) {
    if (parent[x] != y) {
        cout << "Cycle from " << y << " to " << x << ": ";
        find_path(y, x, parent);
        cout << endl << endl;
        finished = true;
    }
}

