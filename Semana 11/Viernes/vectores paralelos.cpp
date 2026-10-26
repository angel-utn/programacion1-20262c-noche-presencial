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

    10- galletita $5000
    15- gaseosa $10000
    22- agua $15000
    33- papitas $1500
    40- veneno par ratas $1000

nos piden que se pueda realizar una venta
el fin de la venta es cuando se ingresa un codigo
igual a 0

mostrar el total de cada venta.

*/

int buscar_codigo(int vec[], int cant, int valor);

int main(){

    int articulos_codigos[5]{
        10,15,22,33,40
    };

    float articulos_precio[5]{
        5000,10000,15000,1500,1000
    };

    int codigo;
    float total = 0;

    cout << "Ingrese codigo: ";
    cin >> codigo;

    while(codigo != 0){

        int pos = buscar_codigo(articulos_codigos, 5, codigo);

        if(pos != -1){
            total += articulos_precio[pos];
        }
        else{
            cout << "Articulo no encontrado" << endl;
        }

        cout << "Ingrese codigo: ";
        cin >> codigo;
    }

    cout << "TOTAL: " << total;

    return 0;
}

int buscar_codigo(int vec[], int cant, int valor){

    for(int i=0; i<cant; i++){
        if(vec[i] == valor){
            return i;
        }
    }

    return -1;
}

