// Hacer barrido de datos para encontrar pares e inpares
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, par, inpar;
    par = 0;
    inpar = 0;
    for (int number : arr)
    {
        if (number % 2 == 0)
        {
            par++;
            cout << number << " par" << endl;
        }
        else
        {
            inpar++;
            cout << number << " impar " << endl;
        }
    };
    cout <<"número pares: " << par  ;
    cout <<"\nnúmero inpares: " << inpar ;
    return 0;
}