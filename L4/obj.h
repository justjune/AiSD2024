#ifndef OBJ_H
#define OBJ_H

#define PQ_SIZE 100

typedef int item_type;

typedef struct {
    item_type q[PQ_SIZE];
    int n;
} priority_queue;


void pq_insert(priority_queue *q, item_type x);
void bubble_up(priority_queue *q, int p); 
void pq_swap(priority_queue *q, int i, int j);
void print_queue(const priority_queue &q);
#endif 