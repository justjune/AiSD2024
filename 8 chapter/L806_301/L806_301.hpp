#ifndef L806_301_h
#define L806_301_h

#include "L808_303.hpp"
#include "L811_307.hpp"

#define MATCH 0
#define INSERT 1
#define DELETE 2

int string_compare(char *s, char *t int i, int j)
{
    int opt[3];
    int lowest_cost;
    if (i==0) return j*indel(' ');
    if (j==0) return i*indel(' ');
    opt[MATCH] = string_compare(s, t, i-1, j-1) + match(s[i], t[j]);
    opt[INSERT] = string_compare(s, t, i, j-1) + indel(t[j]);
    opt[DELETE] = string_compare(s, t, i-1, j) + indel(s[i]);
    lowest_cost = opt[MATCH];
    for (int k=INSERT; k<=DELETE; k++)
        if (opt[k] < lowest_cost) lowest_cost = opt[k];
        return lowest_cost;
}

#endif