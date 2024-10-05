#include <iostream>
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

int main() {
    //T1 - ожидаем список 3 2 1
    List* listt1 = NULL;
    insert_list(&listt1, 1);
    insert_list(&listt1, 2);
    insert_list(&listt1, 3);
    print_list(listt1);
    
    //T2 - ожидаем пустую строку
    List* listt2 = NULL;
    print_list(listt2);
    
    //T3 - проверка порядка вставки
    List* listt3 = NULL;
    for (int i = 0; i < 5; i++){
        insert_list(&listt3, i);
    }
    print_list(listt3);
    return 0;
    
}