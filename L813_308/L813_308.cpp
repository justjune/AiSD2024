#include <iostream>
using namespace std;

void insert_out(char* t, int j) {
printf("I");}

void delete_out(char* s, int i) {
printf("D");}

void match_out(char* s, char *t, int i, int j) {
if (s[i]==t[j]) printf("M"); 
else printf("S");
}

int main(){
	char *t;
	char *s;
	int i,j;

	insert_out(*t,j);
	match_out(*s, *t, i, j);
	delete_out(*s,i);

	return 0;
}