#include <iostream>
using namespace std;

random_sampling(tsp_instance *t, int nsamples, tsp_solution *bestsol) {
	tsp_solution s; 	/* Текущее решение задачи коммивояжера */
	double best_cost;	/* Самая лучшая стоимость на данный момент */
	double cost_now;	/* Текущая стоимость */
	int i;			/* Счетчик */

	initialize_solution(t->n, &s); 
	best_cost = solution_cost(&s,t); 
	copy_solution(&s,bestsol); 
	for (i=l; i<=nsamples; i++) {
		random_solution(&s); 
		cost_now = solution_cost(&s,t); 
		if (cost_now < best_cost) { 
			best_cost = cost_now; 
			copy_solution(&s,bestsol);
		}
	}
}