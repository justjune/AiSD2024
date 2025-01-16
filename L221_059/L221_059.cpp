#include <iostream>
#include <time.h>
#include "selection_sort.h"
using namespace std;
//Антон Селюков - L221_059.cpp делает сортировку методом выбора у списка длиной равной N=10
void test(int k){
    k=7;
}

int main (){
    int f=15;
    test(f);
    cout<<f<<'\n';
    int N=10;
    int arr[N];
    srand(time(NULL));
    for (int i=0; i<N; i++)
    {
        arr[i]=rand()%100;
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    selection_sort(arr, N);
    for (int i=0; i<N; i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}
