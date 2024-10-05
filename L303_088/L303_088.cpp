//L303_088
//Вставка элемента в однонаправленный связный список
//ПМ-2024 Шарапов Даниил, 25.09.24
#include <iostream>
#include "L303_088.hpp"
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