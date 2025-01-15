#include <iostream>
using namespace std;

void row_init(int i){
	m[0][i].cost = 0; /* ИЗМЕНЕНИЕ */
	m[0][i] .parent = -1; /* ИЗМЕНЕНИЕ */•
}

void goal_cell(char *s, char *t, int *i, int *j){
	int k; /* Счетчик */
	*i = strlen(s) - 1;
	*j = 0;
	for (k=l; k<strlen(t); k++)
		if (m[*i][k].cost < m[*i][*j].cost) *j = k;
}

int main(){
	char *t;
	char *s;
	int *i;
	int *j;
	int m[0][i];

	for(int k=0;k<i;k++)
		row_init(k);
	goal_cell(*s, *t, *i, *j);

return 0;

}