#include <iostream>

using namespace std;

/**
   Es importante que cuando usen numeros decimales
   y esten comparando con float, usen la f al final del numero
*/

int main(){

    float numero = 1.1;

    cout << numero << endl;

    if(numero == 1.1){
        cout << "Es un 1.1" << endl;
    }
    else{
        cout << "No es un 1.1" << endl;
    }
    
    if(numero == 1.1f){
       cout << "Es un 1.1" << endl;
    }
    else{
       cout << "No es un 1.1" << endl;
    }


    return 0;
}
