
#include <iostream>
#include <vector>
using namespace std;

const int NMAX = 100; 

void construct_candidates(const int a[], int k, int n, int c[], int* ncandidates) {
    int i;
    bool in_perm[NMAX] = { false }; 
    for (i = 0; i < k; i++) {
        in_perm[a[i]] = true; 
    }

    *ncandidates = 0; 
    for (i = 1; i <= n; i++) {
        if (!in_perm[i]) { 
            c[*ncandidates] = i;
            (*ncandidates)++; 
        }
    }
}


void def_test(const int a[], int k, int n, const int expected_c[], int expected_count) {
    int c[5]; 
    int ncandidates;
    construct_candidates(a, k, n, c, &ncandidates);
    if (ncandidates != expected_count) {
        cout << "the test failed: expected element " << expected_count
            << ", received " << ncandidates << endl;
        return;
    }

    for (int i = 0; i < ncandidates; i++) {
        if (c[i] != expected_c[i]) {
            cout << "the test failed: expected element " << expected_c[i]
                << ", received " << c[i] << " on the position " << i << endl;
            return;
        }
    }

    cout << "The test was passed" << endl;
}

void test_construct_candidates() {
    int n = 5; // Максимальный элемент

    // Тест 1
    int a1[] = { 1, 3 }; 
    int expected_c1[] = { 2, 4, 5 };
    def_test(a1, 2, n, expected_c1, 3);

    // Тест 2
    int a2[] = { 1, 2, 4 }; 
    int expected_c2[] = { 3, 5 };
    def_test(a2, 3, n, expected_c2, 2);

    // Тест 3
    int a3[] = { 5 }; 
    int expected_c3[] = { 1, 2, 3, 4 };
    def_test(a3, 1, n, expected_c3, 4);

    // Тест 4
    int a4[] = { 1, 2, 3, 4 }; 
    int expected_c4[] = { 5 };
    def_test(a4, 4, n, expected_c4, 1);

   
}

int main() {
    test_construct_candidates(); 
    return 0;
}
