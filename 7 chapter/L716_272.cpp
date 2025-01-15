#include <iostream>
using namespace std;

void hill_climbing(tsp_instance *t, tsp_solution *s){
	double cost; /* Самая лучшая стоимость на данный момент '
	double delta; /* Стоимость обмена */
	int i, j; /* Счетчики */
	bool stuck; /* Это решение лучшее? */
	double transition();
	initialize_solution(t->n, s);
	random_solution(s);
	cost = solution_cost(s, t);
	do {
		stuck = TRUE; .
		for (i=l; i<t->n; i++)
		for (j=i+l; j<=t->n; j++) {
			delta = transition(s, t, i, j);
			if (delta < 0) { 
				stuck = FALSE; 
				cost = cost + delta;
			}
			else
				transition(s, t, j, i);
		}
	} while (!stuck);
}