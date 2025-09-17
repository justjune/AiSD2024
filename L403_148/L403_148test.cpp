#include <iostream>
#include "L403_148.hpp"

using namespace std;

int main(){
    cout << "Test: start testing L403_148\n";
    priority_queue q = {};
    q.n = 0;
    for (int i = 0; i <= 10; i+=2){
        pq_insert(&q, i);
        cout << "insert " << i << " in queue\n";
    }
    print_queue(q);
    cout << "Test: test L403_148 finished\n";
}