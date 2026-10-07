#include <iostream>
using namespace std;

/// declaracion de funciones
int pedirNumeroEntre(int inicio, int fin);
float pedirNumero();
void linea();
void saludar(string nombre);
float sumar(float n1, float n2);

int main(){

    float r;
    linea();
    saludar("Brian");
    linea();
    saludar("Abel");
    linea();
    linea();
    linea();

    r = sumar(2,5);
    cout << r << endl;

    float num = pedirNumeroEntre(1,10);

    cout << "El dato ingresa es: " << num << endl;

    return 0;
}


/***
    tipo nombre(tipo nom1, tipo nombre2){
        curpor
        return valor;
    }

*/

/// Funcion que no reciba parametros y tampos
/// devuelva valor
void linea(){
    for(int i=1; i<50; i++){
        cout << (char)196;
    }
    cout << endl;
}

/// Funcion que reciba parametros y
/// pero tampos no devuelva valor

void saludar(string nombre){
    cout << "Hola "<<nombre<<", estan re facheros :)!" << endl;
}

/// fUNCION QUE RECIVA PARAMETROS
/// DEVUELVA UN VALOR

float sumar(float n1, float n2){
    return n1 + n2;
}


/// fUNCION QUE NO RECIVA PARAMETROS
/// DEVUELVA UN VALOR

int pedirNumeroEntre(int inicio, int fin){
    int num;

    do{
        num = pedirNumero();

        if(num < inicio || num > fin){
            cout << "Valor fuera de rango..." << endl;
        }
    }while(num < inicio || num > fin );

    return num;
}



float pedirNumero(){
    float n;

    cout << "Ingrese numero: ";
    cin >> n;

    return n;
}

