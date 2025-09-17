#include "L402_147.hpp"

int pq_parent(int n) {
    if (n == 1) {
        return -1; 
    } else {
        return n / 2; 
    }
}
int pq_young_child(int n) {
    return 2 * n; 
}

