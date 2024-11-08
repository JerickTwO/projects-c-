// Barrido de datos para sumar elementos de array
#include <iostream>
using namespace std;
int main(){
    int array_numbers[] = {1,2,3,4,5,6,7,9}, acc = 0;

    for(int number : array_numbers){
        acc+=number;
    }
    cout << "La suma de todos los numeros del array es: " << acc ;
    return 0;
}