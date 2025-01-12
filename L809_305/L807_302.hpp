#ifndef L807_302_h
#define L807_302_h

#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

typedef struct {
	int cost; /* Стоимость попадания в данную ячейку*/
	int parent; /* Родительская ячейка*/
} cell;


cell m[MAXLEN+1][MAXLEN+1]; /* Таблица динамического программирования*/

#endif //L807_302_h