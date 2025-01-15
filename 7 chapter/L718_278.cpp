#include <iostream>
#define INITIAL_TEMPERATURE;
#define COOLING_STEPS;
#define COOLING_FRACTION; 
using namespace std;

anneal(tsp_instance *t, tsp_solution *s) {
	int il, i2; 		/* Пара элементов для обмена местами */
	int i, j;  		/* Счетчики */
	double temperature;	/* Текущая температура системы */ 
	double current_value;	/* Значение текущего состояния */
	double start_value;	/* Значение в начале цикла */
	double delta; 		/* Значение после обмена */
	double merit, flip; 	/* Условия принятия обмена */
	double exponent;	/* Показатель степени для функции энерг. состояния */

	double random_float(); 
	double solution_cost(), transition(); 
	temperature = INITIAL_TEMPERATURE; 
	initialize_solution(t->n, s); 
	current_value = solution_cost(s, t); 
	for (i=l; i<=COOLING_STEPS; i++) { 
		temperature *= COOLING_FRACTION; 
		start_value = current value;
		for (j =1; j <=STEPS_PER_TEMP; j++) {
			/* Выбираем индексы элементов для обмена местами */
			11 = random_int(1, t->n);
			12 = random_int(1, t->n); 
			flip = random_float(0,1); 
			delta = transition(s,t,il,12);
			exponent = (delta/current_value)/(K*temperature); 
			merit = pow(E, exponent);
			if - (delta < 0)	 /* Принять удачный результат */
				current_value = current_value+delta; 
			else { if (merit > flip) /* Принять неудачный результат */ 
				current_value = current_value+delta; 
			else /* Отклонить */
				transition(s,t,il, i2) ;
			}
		}
	/* Восстанавливаем температуру в случае успеха */ 
	if ((current_value-start_value) < 0.0)
		temperature = temperature/COOLING_FRACTION;
	}
}