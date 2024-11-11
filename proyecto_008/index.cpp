// Calculadora de Interés Compuesto
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Spanish");
    double capitalInicial = 0, tasaInteresAnual = 0, retorno = 0;
    int tiempoAnios = 0;

    // Pedir el capital inicial
    while (capitalInicial <= 0) {
        cout << "Ingrese el monto inicial: ";
        cin >> capitalInicial;
    }

    // Pedir la tasa de interés anual
    while (tasaInteresAnual <= 0) {
        cout << "Ingrese la tasa de interés anual (en %): ";
        cin >> tasaInteresAnual;
    }

    // Pedir el tiempo en años
    while (tiempoAnios <= 0) {
        cout << "Ingrese el tiempo en años: ";
        cin >> tiempoAnios;
    }

    // Formula el monto final usando la fórmula de interés compuesto
    retorno = capitalInicial * pow((1 + (tasaInteresAnual / 100)), tiempoAnios);

    // Mostrar el resultado
    cout << "\nEl monto final después de " << tiempoAnios << " años es: " << retorno << endl;

    return 0;
}
