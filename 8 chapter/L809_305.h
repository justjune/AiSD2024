#ifndef L809_305_h
#define L809_305_h

#include L806_301.h
#include L807_302.h
#include L813_307.h //не готов, не мой

match_out(char s, char t, int i, int j);
insert_out(char t, int j);
delete_out(char s, int i);

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

#endif //L809_305_h