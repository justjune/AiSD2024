#include "L807_302.hpp"
#include <iostream>

using namespace std;

#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

typedef struct {
	int cost; /* Стоимость попадания в данную ячейку*/
	int parent; /* Родительская ячейка*/
} cell;

int main () {
	cell m[MAXLEN+1][MAXLEN+1]; /* Таблица динамического программирования*/
    m[0][0].cost   = 1;
    m[0][0].parent = 2;
    cout<<m[0][0].cost<<" () "<<m[0][0].parent;
}
