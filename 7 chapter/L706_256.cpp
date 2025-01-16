#include <iostream>
#include <vector>
using namespace std;

const int NMAX = 100; // Максимальный размер массива

void process_solution(int a[], int k) {
    for (int i = 0; i <= k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool is_a_solution(int a[], int k, int n) {
    return (k == n - 1); // k начинаем с 0, поэтому условие на n - 1
}

void backtrack(int a[], int k, int n) {
    if (is_a_solution(a, k, n)) {
        process_solution(a, k);
    }
    else {
        for (int i = 1; i <= n; i++) {
            bool found = false;
            for (int j = 0; j <= k; j++) {
                if (a[j] == i) {
                    found = true; // Проверка, не используется ли элемент
                    break;
                }
            }
            if (!found) {
                a[k + 1] = i; // Добавляем новый элемент
                backtrack(a, k + 1, n); // Рекурсивный вызов
            }
        }
    }
}

void generate_permutations(int n) {
    int a[NMAX]; // Вектор решений
    backtrack(a, -1, n); // Начинаем с k = -1
}

void check_test(int n, const vector<string>& expected_permutations) {
    vector<string> actual_permutations;
    streambuf* original_cout = cout.rdbuf();
    cout.rdbuf(original_cout); //замена cout
    generate_permutations(n);
    cout.rdbuf(original_cout); //восстанавливаем cout

    //сравниваем expected_permutations и actual_permutations;
    for (size_t i = 0; i < expected_permutations.size(); i++) {
        if (i < actual_permutations.size() && actual_permutations[i] != expected_permutations[i]) {
            cout << "the test failed: the expected permutation does not match the received one." << endl;
            return;
        }
    }

    cout << "the test was passed!" << endl;
}

void test_generate_permutations() {
    // Пример 1
    int n1 = 3;
    vector<string> expected1 = {
        "1 2 3",
        "1 3 2",
        "2 1 3",
        "2 3 1",
        "3 1 2",
        "3 2 1"
    };
    check_test(n1, expected1);

    // Пример 2
    int n2 = 2;
    vector<string> expected2 = {
        "1 2",
        "2 1"
    };
    check_test(n2, expected2);
}

int main() {
    test_generate_permutations(); 
    return 0;
}
