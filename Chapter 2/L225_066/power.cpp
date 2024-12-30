#include <iostream>
int power(int a,int n) 
{
    if (n == 0) 
        return(1);
    int x = power(a, n/2);
    if (n%2==0)
        return(x*x);
    else 
        return(a * x*x);
}