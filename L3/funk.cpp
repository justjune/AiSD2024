
#include <iostream>
#include "funk.hpp"
using namespace std;
struct List{
    int value;
    List* next;
};

List* search_list(List* l, int x){
    if (l == NULL) return NULL;
    if (l->value == x) return l;
    return search_list(l->next, x);
}

List* append(List* head, int value){
    List* newList = new List{value, NULL};
    if (head == NULL) return newList;
    List* current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = newList;
    return head;
}