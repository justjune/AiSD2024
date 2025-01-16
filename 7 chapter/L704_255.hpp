#ifndef L704_255_h
#define L704_255_h

#include <iostream>
#include <vector>

const int NMAX = 100;
const int MAXCANDIDATES = 100;

struct InputData {
    int target_depth;
    int max_option;
};

// Функции для работы с алгоритмом обратного отслеживания
bool is_a_solution(const std::vector<int>& a, int k, const InputData& input);
void process_solution(const std::vector<int>& a, int k, const InputData& input);
void construct_candidates(const std::vector<int>& a, int k, const InputData& input, int c[], int& ncandidates);
void make_move(std::vector<int>& a, int k, const InputData& input);
void unmake_move(std::vector<int>& a, int k, const InputData& input);
void backtrack(std::vector<int>& a, int k, const InputData& input);
void generate_subsets(int n);

#endif // L704_255