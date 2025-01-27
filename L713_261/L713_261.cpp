#include <iostream>
using namespace std;
#define DIMENSION
#define NCELLS
typedef struct {
	int m[DIMENSION+1][DIMENSION+1]; 
	int freecount;
	point move [NCELLS+1];
} boardtype;

process_solution(int а[], int k, boardtype *board) {
	print_board(board);
	finished = TRUE;
}

int main(){
	int a[];
	int k;
	boardtype *board = NULL;
	
	process_solution(a*, k, *board);

return 0;
