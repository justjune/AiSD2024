#ifndef L810_306_h
#define L810_306_h

#include L806_301.h
#include L807_302.h

row_init (int i) //Изменён в L814_308.h
{
	m[0][i].cost=i;
	if (i>0)
		m[0][i].parent = INSERT;
	else
		m[0][i].parent = -1;
}

column_init (int i)
{
	m[i][0].cost=i;
	if (i>0)
		m[i][0].parent = DELETE;
	else
		m[i][0].parent = -1;
}

#endif //L810_306_h