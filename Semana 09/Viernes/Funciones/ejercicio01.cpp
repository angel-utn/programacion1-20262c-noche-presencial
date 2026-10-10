/**
  Escribir una función que reciba dos números enteros
  y retorne su suma.
*/

#include <iostream>
using namespace std;

/// Declaración (encabezado, firma, prototipo)
int sumar(int numero1, int numero2);

int main(){

 int a, r;

 cout << "Ingresar dos números: ";
 cin >> a;

 r = sumar(a, b);

 cout << "El resultado de la suma es: " << r << endl;

 return 0;
}

/// Definición
int sumar(int numero1, int numero2){
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}
