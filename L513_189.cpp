#include <iostream>
using namespace std;

void find_path(int start, int end, int parents[]) {
    if (start == end || end == -1) {
        cout << start << endl;
    } else {
        find_path(start, parents[end], parents);
        cout << " " << end;
    }
}
