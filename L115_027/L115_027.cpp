#include <iostream>
#include "EJF.h"

using namespace std;

int main() {
    vector<Interval> intervals = {
        {1, 3, 0}, {2, 5, 1}, {6, 8, 2}, {3, 7, 3}, {9, 10, 4}
    };

    vector<int> result = earliestJobFirst(intervals);

    cout << "Выбранные интервалы (индексы): ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}

