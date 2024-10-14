#include L811_307.h
#include <iostream>

int match(char c, char d);
int indel (char c);

int main() {
    char* a="cr", b="lf";
    cout<<match(a,b)<<match(a,a);
    cout<<"\n"<<indel(a);
}