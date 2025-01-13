#include <iostream>
#include "funk8.hpp"
using namespace std;
struct List {
    int value;
    List* next;
};

void insert_list(List** l, int x) {
    List* p = new List;
    p->value = x;
    p->next = *l;      
    *l = p;            
}

void print_list(List* l) {
    while (l != NULL) {
        cout << l->value << " ";
        l = l->next;
    }
    cout << endl;
}