//  Делягин Ф.О ПМ-201
#ifndef SET_UNION_HPP
#define SET_UNION_HPP


#define SET_SIZE 1000

struct set_union{
    int p[SET_SIZE+1];    // Родительский элемент
    int size[SET_SIZE+1];   // Количество элементов в поддереве i 
    int n;                  // Количество элементов в множестве
};


void set_union_init(set_union *s, int n);
void union_sets(set_union *s, int s1, int s2);
bool same_component(set_union *s, int s1, int s2);
void print_set_union(set_union *s);
#endif