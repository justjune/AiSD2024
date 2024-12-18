#include "L811_307.hpp"
#include <iostream>

using namespace std;

int match(char c, char d);
int indel (char c);

int main() {
    char* a="cr", b="lf";
    cout<<match(a,b)<<match(a,a);
    cout<<"\n"<<indel(a);
}