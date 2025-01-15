#include "lfuk.h"

Node* search_list(Node* l, int x) {
    if (l == nullptr) {
        return nullptr;
    }
    if (l->item == x) {
        return l;
    }
    return search_list(l->next, x);
}
