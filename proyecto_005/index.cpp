//  Array inverso obteniendo valor del arrray completo mediante
//  una division de bytes del array completo para el valor de bytes de cada posicion
#include <iostream>
using namespace std;
int main()
{
    int array_numeros[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array_numeros) / sizeof(array_numeros[0]);

    for (int i = n - 1; i >= 0; i--)
    {
        cout << array_numeros[i] << "\n";
    }
}