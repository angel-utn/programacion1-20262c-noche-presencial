#include <iostream>
using namespace std;

/**
    ESTRUCTURA DE UNA FUNCION

    TIPO_DE_RETORNO nombre_funcion (tipo parametro1, tipo parametro2){
        ... codigo

        return valor_a_devolver
    }

    ----
    Llamado a una funcion

    nombre_funcion(argumento1, argumento2);

    ----

    COMBINACIONES POSIBLES

    1. No retorna nada y no recibe parametros      -> void holamundo()
    2. No retorna nada pero recibe parametros       -> void saludar(string nombre)
    3. Retorna algo pero no recibe parametros       -> int pedirNumero()
    4. Retorna algo y recibe parametros             -> int sumar(int n, int m)

*/


/// no hay resultado (no retorna) y no tiene parametros
void holamundo(){
   cout << "Hola Mundo! soy una funcion!" << endl;
}

void linea(){
   cout << "******************************" << endl;
}

/// no devuelve nada pero recibe parametros
void saludar(string nombre){
   cout << "Hola "<<nombre<<"!" << endl;
}

// retorna algo y recibe parametros
void mostrarSuma(int num1, int num2){
   cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

/// devuelve algo pero no recibe parametros

int pedirNumero(){
   int num;
   cout << "Ingrese numero: ";
   cin >> num;

   return num;
}

/// devuelve algo y recibe parametros
int sumar(int n, int m){
   return n + m;
}

int main() {

   linea();
   holamundo();/// llamado o invocado
   linea();
   holamundo();
   linea();
   holamundo();
   linea();


   saludar("Brian");
   saludar("Lucas");
   saludar("Maria");


   mostrarSuma(2,5);
   int num1, num2;

   num1 = pedirNumero();
   num2 = pedirNumero();

   mostrarSuma(num1, num2);

   int resultado = sumar(2,10);
   cout << resultado << endl;
   return 0;
}

