#ifndef LFUK_H
#define LFUK_H

#include <iostream>

struct Node {
    int item;
    Node* next;
};

Node* search_list(Node* l, int x);

#endif // LFUK_H
