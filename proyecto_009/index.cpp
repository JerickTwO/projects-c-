#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1 = 212121, n2 = 3233, n3 = 14802399;
    string Resultado = "";
    if (n1 == n2 && n2 == n3)
    {
        Resultado = "Todos son iguales";
    }
    else if (n1 > n2 && n1 > n3)
    {
        Resultado = "El primer numero es mayor";
    }
    else if (n2 > n1 && n2 > n3)
    {
        Resultado = "El segundo numero es mayor";
    }
    else
    {
        Resultado = "El tercer numero es mayor";
    }
    cout << "Resultado: " << Resultado << endl;
    return 0;
}