//Невзорова Елена МХ-2
#include <iostream>
#include <vector>
#include <algorithm>
#include "l902.h" // Подключение заголовочного файла

using namespace std;

int main() {
    int n;
    cout << "Enter the number of items in the sequence: ";
    cin >> n;

    vector<int> sequence(n);
    cout << "Enter the sequence elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    // Поиск LIS
    vector<int> lis = LongestIncreasingSubsequence(sequence);

    // Вывод результата
    cout << "Maximum increasing subsequence:";
    for (int num : lis) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
