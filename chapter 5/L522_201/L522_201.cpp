//L522_201
//определение типа ребра 
//мх-201 Лазуков Никита Владимирович

enum EdgeClassification { TREE, BACK, FORWARD, CROSS }; 

EdgeClassification edge_classification(int x, int y, int* parent, bool* discovered, bool* processed, int* entry_time) {
    if (parent[y] == x) return TREE;
    if (discovered[y] && !processed[y]) return BACK;
    if (processed[y] && (entry_time[y] > entry_time[x])) return FORWARD;
    if (processed[y] && (entry_time[y] < entry_time[x])) return CROSS;
    cout << "Warning: unclassified edge (" << x << "," << y << ")\n";
}
