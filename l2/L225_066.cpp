// Садрисаламов Реваль ПМ-201
#include <iostream>
#include "pusk.h" // Заголовочный файл с объявлением функции power
using namespace std;

int main()
{
    int a, n;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the degree (n): ";
    cin >> n;

    cout << "Result: " << pusk2(a, n) << endl;

    return 0;
}
