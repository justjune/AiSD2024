#ifndef L706_256_h
#define L706_256_h

#include <iostream>
#include <vector>

const int NMAX = 100;

// Функции для генерации перестановок
void process_solution(int a[], int k);
bool is_a_solution(int a[], int k, int n);
void backtrack(int a[], int k, int n);
void generate_permutations(int n);
void check_test(int n, const std::vector<std::string>& expected_permutations);
void test_generate_permutations();

#endif 
