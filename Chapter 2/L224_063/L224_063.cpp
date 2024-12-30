#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
  const int rows=5;
    const int columns=5;
    
int main()
{
    srand(time(NULL));
    int arr[rows][columns];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            arr[i][j]=rand()%3;
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
    productmatrix(rows, columns, arr);
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
}