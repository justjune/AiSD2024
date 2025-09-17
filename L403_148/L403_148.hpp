#ifndef L403_148_HPP
#define L403_148_HPP
#include "../L402_147/L402_147.hpp"

void pq_insert(priority_queue *q, int x);
void pq_swap(priority_queue *q, int i, int j);
void bubble_up(priority_queue *q, int p);
void print_queue(const priority_queue &q);
#endif