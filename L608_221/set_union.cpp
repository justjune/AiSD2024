// Делягин Ф.О ПМ-201
#include <iostream>

#include "./../set_union.h"

void set_union_init(set_union *s, int n) {
    for (int i = 1; i <= n; i++) {
        s->p[i] = i;
        s->size[i] = 1;
    }
    s->n = n;
}

int find(set_union *s, int x) {
    if (s->p[x] == x) {
        return(x);
    }
    return(find(s, s->p[x]));
}
void union_sets(set_union *s, int s1, int s2) {
    int r1, r2; 

    r1 = find(s, s1);
    r2 = find(s, s2);
    std::cout << "s1=" << s1 << "r1=" << r1 << "s2=" << s2 << "r2=" << r2 << '\n';

    if (r1 == r2) {
        return;    
    }

    if (s->size[r1] >= s->size[r2]) {
        s->size[r1] = s->size[r1] + s->size[r2];
        s->p[r2] = r1;
    } else {
        s->size[r2] = s->size[r1] + s->size[r2];
        s->p[r1] = r2;
    }
}

bool same_component(set_union *s, int s1, int s2) {
    return (find(s, s1) == find(s, s2));
}
void print_set_union(set_union *s) {
    for (int i = 1; i <= s->n; i++) {
        std::cout << i <<" set=" << s->p[i] << " size=" << s->size[i]<< '\n';
    }
    std::cout << '\n';
}
