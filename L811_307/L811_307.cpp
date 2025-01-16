#include "L811_307.hpp"
#include <iostream>

using namespace std;

int match(char c, char d)
{
	if (c==d) return 0;
	else return 1;
}

int indel (char c)
{
	return 1;
}

int main() {
    char* a="cr", b="lf";
    cout<<match(a,b)<<match(a,a);
    cout<<"\n"<<indel(a);
}