#include "L810_306.hpp"
#include "L806_301.hpp"
#include "L807_302.hpp"
#include <iostream>

using namespace std;
#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

typedef struct {
	int cost; /* Стоимость попадания в данную ячейку*/
	int parent; /* Родительская ячейка*/
} cell;

void row_init (int i) //Изменён в L814_308.h
{
	cell m[MAXLEN+1][MAXLEN+1];

	m[0][i].cost=i;
	if (i>0)
		m[0][i].parent = INSERT;
	else
		m[0][i].parent = -1;
}

void column_init (int i)
{
	cell m[MAXLEN+1][MAXLEN+1];
	
	m[i][0].cost=i;
	if (i>0)
		m[i][0].parent = DELETE;
	else
		m[i][0].parent = -1;
}

int main() {
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            m[i][j]=i+j;
        }
    }
    for (size_t i=0; i<MAXLEN; ++i)
    {
        cout<<row_init(i)<<endl;
        cout<<column_init(i)<<endl;
    }
}
