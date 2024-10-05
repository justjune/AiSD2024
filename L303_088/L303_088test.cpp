#include <iostream>
#include "L303_088.hpp"
using namespace std;
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