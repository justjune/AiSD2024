#ifndef L402_147_HPP
#define L402_147_HPP
#define PQ_SIZE 1000

struct priority_queue{
    int q[PQ_SIZE+1];
    int n;
};

int pq_parent(int n);
int pq_young_child(int n);
#endif