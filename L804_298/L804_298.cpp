#include "L804_298.hpp"
#include <iostream>

using namespace std;

long fib_ultimate(int n) 
{
    long back2=0, back1=1;
    long next;
    if (n==0) return 0;
    for (int i=2; i<n; i++) {
        next = back2+back1;
        back2 = back1;
        back1 = next;
    }
    return back1 + back2;
}

int main () {
    cout<<fib_ultimate(5);
}