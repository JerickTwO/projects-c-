// Promedio de todos los valores de un array
#include <iostream>
using namespace std;
int main()
{
    double notas[] = {10, 9}, promedio = 0;
    double acc = 0;
    int n = sizeof(notas) / sizeof(notas[0]);

    cout << "sacando promedio...\n";
    for (double nota : notas)
    {
        acc += nota;
    }
    promedio = acc / n;
    cout << "El promedio es igual a: "<<promedio;
    return 0;
}