#ifndef SET_UNION_H
#define SET_UNION_H


#define SET_SIZE 1000

struct set_union{
    int p[SET_SIZE+1];    
    int size[SET_SIZE+1];   
    int n;                  
};


void set_union_init(set_union *s, int n);
void union_sets(set_union *s, int s1, int s2);
bool same_component(set_union *s, int s1, int s2);
void print_set_union(set_union *s);
#endif