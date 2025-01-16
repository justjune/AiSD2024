//Невзорова Елена Мх-2
#include <iostream>
#include <vector>
#include "L818.h"

using namespace std;

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<vector<double>> distances(n, vector<double>(n));
    cout << "Enter the distance matrix (row by row):" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> distances[i][j];
        }
    }

    double result = MinimumWeightTriangulation(distances);
    cout << "Minimum weight of triangulation: " << result << endl;

    return 0;
}