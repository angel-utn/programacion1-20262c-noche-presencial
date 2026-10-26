#include <iostream>

using namespace std;
/***
1 - 10 => c - 1
11 - 20 = c - 11
*/

/**
Hacar un programa para un kiosco
el kiosco tiene 5 articulos
y son los siguientes:

    1- galletita $5000
    2- gaseosa $10000
    3- agua $15000
    4- papitas $1500
    5- veneno par ratas $1000

nos piden que se pueda realizar una venta
el fin de la venta es cuando se ingresa un codigo
igual a 0

mostrar el total de cada venta.

*/

int main(){

    float articulos_precio[5]{
        5000,10000,15000,1500,1000
    };

    int codigo;
    float total = 0;

    cout << "Ingrese codigo: ";
    cin >> codigo;

    while(codigo != 0){

        total += articulos_precio[codigo - 1];

        cout << "Ingrese codigo: ";
        cin >> codigo;
    }

    cout << "TOTAL: " << total;

    return 0;
}
