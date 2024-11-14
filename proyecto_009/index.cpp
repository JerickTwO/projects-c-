#include <iostream>
using namespace std;
int main(){
    int x = 4, y = 5, aux;
    aux = x;
    x =y;
    y = aux;

    cout << "x = " << x << ", y = " << y << endl; // Outputs: x = 5, y = 5
    return 0;
}