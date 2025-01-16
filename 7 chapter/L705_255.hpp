#ifndef L705_255_h
#define L705_255_h

#include <iostream>
#include <vector>

const int NMAX = 100;

void construct_candidates(const int a[], int k, int n, int c[], int* ncandidates);
void def_test(const int a[], int k, int n, const int expected_c[], int expected_count);
void test_construct_candidates();

#endif // L705_255_h
