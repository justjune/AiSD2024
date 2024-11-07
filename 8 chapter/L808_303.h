#ifndef L808_303_h
#define L808_303_h

#include L812_307.h
#include L807_302.h
#include L811_307.h
#include L806_301.h

goal_cell(char *s, char *t, int *i, int *j);

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

#endif //L808_303_h