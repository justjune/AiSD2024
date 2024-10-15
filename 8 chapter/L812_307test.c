#include L812_307.h
#include <iostream>

void goal_cell(char *s, char *t, int *i, int *j);

int main() {
    char* a="cr", b="lf";
    int* i=0, j=0;
    goal_cell(a, b, &i, &j);
    cout<<a[i]<<" "<<b[j];
}