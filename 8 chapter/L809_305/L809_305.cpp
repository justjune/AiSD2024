#include "L806_301.hpp"
#include "L807_302.hpp"
#include "L813_307.hpp" //не готов, не мой
#include <iostream>

using namespace std;

#define MATCH 0
#define DELETE 2
#define MAXLEN 2 // Изменяемое значение, которое Скиена не задал в этом параграфе

match_out(char *s, char *t, int i, int j);
insert_out(char *t, int j);
delete_out(char *s, int i);//эти три не на моей совести

reconstruct_path(char *s, char *t, int i, int j)
{
	if (m[i][j].parent == -1) return;
	if (m[i][j].parent == MATCH) {
		reconstruct_path(s, t, i-1, j-1);
		match_out(s, t, i, j);
		return;
	}
	if (m[i][j].parent == MATCH) {
		reconstruct_path(s, t, i, j-1);
		insert_out(t, j);
		return;
	}
	if (m[i][j].parent == DELETE) {
		reconstruct_path(s, t, i-1, j);
		delete_out(s, i);
		return;
	}
}

int main () {
    char* a="cr", b="lf";
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            m[i][j]=i+j;
        }
    }
    cout<<string_compare(a, b);
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            reconstruct_path(a,b,i,j);
        }
    }
    cout<<string_compare(a, b);
}
