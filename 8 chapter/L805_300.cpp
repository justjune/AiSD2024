#include "L805_300.hpp"
#include <iostream>

using namespace std;

#define MAXN 45

long binomial_coefficient(n, m)
{
    long bc[MAXN][MAXN];
    for (int i=0; i<=n; i++) bc[i][0] = 1;
    for (int j=0; j<=n; j++) bc[j][j] = 1;
    for (int i=1; i<=n; i++) 
        for (int j=1; j<i; j++)
            bc[i][j] = bc[i-1][j-1] + bc[i-1][j];
    return bc[n][m];
}

int main() {
    int n, m;
    cout<<"choose n"<<endl;
    cin>>n;
    cout<<"choose the number of coefficient"<<endl;
    cin>>m;
    cout<<binomial_coefficient(n,m);
}