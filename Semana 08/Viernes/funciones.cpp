#include <iostream>
using namespace std;
/**

/// IMPLEMENTACION DE LA FUNCION
TIPO_RETORNO IDENTIFICADOR (PARAMETROS){
    CUERPO
}

TIPO_RETORNO: Es el tipo de dato del resultado 
del llamado a esta funcion
En caso de no tener resultado, va void

IDENTIFICADOR: Es el nombre de la funcion, es por la cual
vamos a llamar a esta funcion

PARAMETROS: un lista de variables donde pueden 
enviarle datos. son los datos necesarios
para funcionar (Datos de entrada)

CURPO: son las instrucciones que va a realizar 
esa funcion

//// LLAMADO o INVOCACION de la funcion

IDENTIFADOR(ARGUMENTOS)

ARGUMENTOS: son los valores que van a tener los parametros

*/

/**
1- Reutilizacion
2- Mantenimiento
3- Legibilidad
4- Delegar responsabilidades (tareas)
5- Escalabilidad 
6- Modularizacion 

*/

/**
    Si tenemos
    f(x) = 2x

    La funcion seria:
*/


/// definicion
float formula(float x){
    if(x >= 0 ){
        return 2 * x;
    }
    else{
        return 5 * x;
    }
}


int main(){
    float r1, r2, r3;

    /// llamar a la funcion
    r1 = formula(4);
    r2 = formula(-5);
    r3 = formula(0);

    cout << "formula(4): " << r1 << endl;
    cout << "formula(-5): " << r2 << endl;
    cout << "formula(0): " << r3 << endl;
  
    return 0;
}

