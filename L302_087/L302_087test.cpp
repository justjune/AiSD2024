#include <iostream>
#include "L302_087.hpp"
using namespace std;
int main(){
    setlocale(LC_ALL, "RU");
    List* head = NULL;
    for (int i = 1; i <= 50; i++){
        head = append(head, i);
    }
    for (int i = 5; i <= 9; i++){
        List* found = search_list(head, i);
        if (found) {cout << "Элемент " << i << " найден" <<endl;}
        else {cout << "Элемент " << i << " не найден" << endl;}
    }
    cout << endl;
    for (int i = -4; i <= 0; i++){
        List* found = search_list(head, i);
        if (found) {cout << "Элемент " << i << " найден" <<endl;}
        else {cout << "Элемент " << i << " не найден" << endl;}
    }
    
}
