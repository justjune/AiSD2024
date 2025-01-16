#ifndef L702_252_h
#define L702_252_h

#include <vector>

const int MAXCANDIDATES = 100;

struct InputData {
    int target_depth;
    int max_option;
};

bool is_a_solution(const std::vector<int>& a, int k, const InputData& input);
void process_solution(const std::vector<int>& a, int k, const InputData& input);
void construct_candidates(const std::vector<int>& a, int k, const InputData& input, int c[], int& ncandidates);
void make_move(std::vector<int>& a, int k, const InputData& input);
void unmake_move(std::vector<int>& a, int k, const InputData& input);

#endif 
