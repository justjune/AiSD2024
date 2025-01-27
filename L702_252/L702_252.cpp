#include <iostream>
#include <vector>
using namespace std;

const int MAXCANDIDATES = 100;
bool finished = false;

struct InputData {
    int target_depth;
    int max_option;
};

bool is_a_solution(const vector<int>& a, int k, const InputData& input){
    return k == input.target_depth; 
}

void process_solution(const vector<int>& a, int k, const InputData& input){
    cout << "Solution: ";
    for (int i = 0; i <= k; i++){
        cout << a[i] << " ";
    }
    cout << '\n';
}

void construct_candidates(const vector<int>& a, int k, const InputData& input, int c[], int& ncandidates) {
    ncandidates = 0;
    for (int i = 0; i < input.max_option; i++) {
        c[ncandidates++] = i;
    }
}

void make_move(vector<int>& a, int k, const InputData& input) {}
void unmake_move(vector<int>& a, int k, const InputData& input) {}

void backtrack(vector<int>& a, int k, const InputData& input) {
    int c[MAXCANDIDATES];
    int ncandidates;

    if (is_a_solution(a, k, input)) {
        process_solution(a, k, input);
    }
    else {
        k++;
        construct_candidates(a, k, input, c, ncandidates);
        for (int i = 0; i < ncandidates; i++) {
            a[k] = c[i];
            make_move(a, k, input);
            backtrack(a, k, input);
            unmake_move(a, k, input);
            if (finished) return; //
        }
    }
}

int main() {
    vector<int> a(MAXCANDIDATES);
    InputData input;

    input.target_depth = 5;      
    input.max_option = 3;        

    backtrack(a, 3, input);
    return 0;
}
