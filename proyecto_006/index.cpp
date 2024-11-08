// encontrar un numero ya definido dentro de un array
#include <iostream>
using namespace std;
int main()
{
    double numeros[] = {1, 3, 4, 5, 21}, numEcontrar = 21;
    bool encontrado = false;

    cout << "buscando...\n";
    for (double numero : numeros)
    {
        if (numero == numEcontrar)
        {
            encontrado = true;
            break;
        }
    }
    if (encontrado)
    {
        cout << "El número se encontró exitosamente";
    }
    else
    {
        cout << "Número no encontrado";
    }
    return 0;
}