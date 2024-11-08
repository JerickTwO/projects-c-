// Barrido de datos para ver el elemento > y < de un array
#include <iostream>
using namespace std;
int main()
{
    int array_numeros[] = {0, -143, 2, 3, 4, 5, 6}, maximo = array_numeros[0], minimo = array_numeros[0];
    for (int numero : array_numeros)
    {
        if (numero > maximo)
        {
            maximo = numero;
        }
        else if (numero < minimo)
        {
            minimo = numero;
        }
    }
    cout << "El número maximo es el: " << maximo;
    cout << "\nEl número minimo es el: " << minimo;

    return 0;
}