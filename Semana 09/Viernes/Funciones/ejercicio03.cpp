#include <iostream>
using namespace std;

/**
Escribir una función que intercambie los valores de dos variables enteras.
*/

void intercambiar(int &a, int &b);

int main(){

    int x = 10, y = 100;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    intercambiar(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

 return 0;
}

void intercambiar(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

bool dividir(float dividendo, float divisor, float &resultado){

    if (divisor != 0){
        resultado = dividendo / divisor;
        return true;
    }
    else{
        return false;
    }

}
