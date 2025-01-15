#include <iostream>
using namespace std;

void process_vertex_early(int v) {
    cout << "processed vertex " << v << endl;
}

void process_edge(int x, int y) {
    cout << "processed edge (" << x << ", " << y << ")" << endl;
}
