#include "L812_307.hpp"
#include "L807_302.hpp"
#include "L811_307.hpp"
#include "L806_301.hpp"
#include "L808_303.hpp"
#include <iostream>

using namespace std;

#define MATCH 0
#define INSERT 1
#define DELETE 2
#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

typedef struct {
	int cost; /* Стоимость попадания в данную ячейку*/
	int parent; /* Родительская ячейка*/
} cell;

goal_cell(char *s, char *t, int *i, int *j) //Изменён в L814_308.h
{
	*i = strlen(s)-1;
	*j = strlen(t)-1;
}

int match(char c, char d)
{
	if (c==d) return 0;
	else return 1;
}

int indel (char c)
{
	return 1;
}

int string_compare(char *s, char *t)
{
	int i, j, k;
	int opt[3];
	for (size_t i=0; i<strlen(s); i++) {
		for (size_t j=0; j<strlen(t); j++) {
			opt[MATCH] = m[i-1][j-1].cost + match(s[i],t[i]);
			opt[INSERT] = m[i][j-1].cost + indel(t[j]);
			opt[DELETE] = m[i-1][j].cost + indel(s[i]);
			m[i][j].cost = opt[MATCH];
			m[i][j].parent = MATCH;
			for (size_t k=INSERT; k<=DELETE; k++)
				if (opt[k] < m[i][j].cost) {
					m[i][j].cost = opt[k];
					m[i][j].parent = k;
				}
		}
	}
	goal_cell(s, t, &i, &j);
	return (m[i][j].cost);
}

int main () {
    const char* a="cr";
    const char* b="lf";
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            m[i][j]=i+j;
        }
    }
    cout<<string_compare(a, b);
}