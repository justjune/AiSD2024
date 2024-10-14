#include L809_305.h
#include L808_303.h
#include <iostream>

int string_compare(char *s, char *t);
void reconstruct_path(char *s, char *t, int i, int j)

int main () {
    char* a="cr", b="lf";
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            m[i][j]=i+j;
        }
    }
    cout<<string_compare(a, b);
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            reconstruct_path(a,b,i,j);
        }
    }
    cout<<string_compare(a, b);
}
