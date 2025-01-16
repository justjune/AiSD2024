#include <iostream>
#include <vector>

using namespace std;

bool is_solution(int a[], int k, int n) {
    return (k == n);
}

void construct_candidates(int a[], int k, int n, bool c[], int& ncandidates) {
    c[0] = true;
    c[1] = false;
    ncandidates = 2; 
}

void process_solution(int a[], int k) {
    cout << "{ ";
    for (int i = 1; i <= k; i++) 
        if (a[i]) cout << i << " "; 
   
    cout << "}" << endl;
}

void test() {
    // Тест для функции is_solution
    int n = 3;

    // Проверяем случаи, когда k равно n и когда k меньше n
    cout << "Testing is_solution:" << endl;
    cout << "is_solution(a, 3, 3) should return true: "
        << (is_solution(nullptr, 3, n) ? "true" : "false") << endl; // k == n
    cout << "is_solution(a, 2, 3) should return false: "
        << (is_solution(nullptr, 2, n) ? "true" : "false") << endl; // k < n

    // Тест для функции construct_candidates
    int a[4] = { 0 }; // Пример массива для n=3, a[0] не используется
    bool c[2];
    int ncandidates;

    cout << "\nTesting construct_candidates:" << endl;
    construct_candidates(a, 1, n, c, ncandidates);
    cout << "Candidates: " << (c[0] ? "TRUE" : "FALSE") << ", " << (c[1] ? "TRUE" : "FALSE") << endl;
    cout << "Number of candidates: " << ncandidates << endl; // ожидаем 2

    // Тест для функции process_solution
    cout << "\nTesting process_solution:" << endl;
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= k; i++) { //сначала добавляем TRUE на первых k элементах
            a[i] = true;
        }
        process_solution(a, k);
        for (int i = k + 1; i <= n; i++) {
            a[i] = false;             // Все следующие элементы FALSE
        }
    }
}

int main() {
    test();
    return 0;
}
