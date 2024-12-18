#include "L810_306.hpp"
#include <iostream>

using namespace std;
 
void row_init (int i);
void column_init (int i);

int main() {
    for (size_t i=0; i<MAXLEN; ++i)
    {
        for (size_t j=0; j<MAXLEN; ++j)
        {
            m[i][j]=i+j;
        }
    }
    for (size_t i=0; i<MAXLEN; ++i)
    {
        cout<<row_init(i)<<endl;
        cout<<column_init(i)<<endl;
    }
}