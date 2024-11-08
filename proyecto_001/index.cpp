#include <iostream>
using namespace std;

double precioConIva(double n1, double IVA){
    double ivaProducto = n1 * IVA;
    double conIva = n1 + ivaProducto;
    return conIva, ivaProducto; 
}
int main()
{
    double n1;
    const double IVA = .14;

    cout << "Ingrese el precio: ";cin>>n1;


    cout << "Con Iva:\n " << precioConIva(n1,IVA) ;
    return 0;
}