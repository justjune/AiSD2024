#include "L805_300.hpp"
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout<<"choose n"<<endl;
    cin>>n;
    cout<<"choose the number of coefficient"<<endl;
    cin>>m;
    cout<<binomial_coefficient(n,m);
}