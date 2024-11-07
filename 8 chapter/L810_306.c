#include L806_301.h
#include L807_302.h

void row_init (int i) //Изменён в L814_308.h
{
	m[0][i].cost=i;
	if (i>0)
		m[0][i].parent = INSERT;
	else
		m[0][i].parent = -1;
}

void column_init (int i)
{
	m[i][0].cost=i;
	if (i>0)
		m[i][0].parent = DELETE;
	else
		m[i][0].parent = -1;
}
