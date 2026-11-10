#include <iostream>
using namespace std;
#include "funciones.h"


void inicializar(int mazo[]){
    for(int i=0; i<40; i++){
        mazo[i] = i+1;
    }
}

void obtenerNaipe(int codigo, int &numero, string &palo){
    if (codigo <= 10){
        palo = "Espada";
        numero = codigo;
    }
    else if (codigo <= 20){
        palo = "Copa";
        numero = codigo - 10;
    }
    else if (codigo <= 30){
        palo = "Basto";
        numero = codigo - 20;
    }
    else if (codigo <= 40){
        palo = "Oro";
        numero = codigo - 30;
    }

    if (numero >= 8){
        numero += 2;
    }

}

void mostrarMazo(int mazo[], int cant){
    for(int i=0; i<cant; i++){
        int numero = 0;
        string palo = "";
        int codigo = mazo[i];
        obtenerNaipe(codigo, numero, palo);

        cout << numero << " de " << palo << endl;
    }
}

void mezclar(int mazo[]){
    for(int i=0; i<100; i++){
        int pos1, pos2, aux;
        pos1 = rand() % 40;
        pos2 = rand() % 40;

        // Intercambio
        aux = mazo[pos1];
        mazo[pos1] = mazo[pos2];
        mazo[pos2] = aux;
    }
}

void repartir(int mazo[], int mano[], int cant){
    int repartidas = 0, i = 0;

    while(repartidas < cant){
        if (mazo[i] > 0){
            mano[repartidas] = mazo[i];
            mazo[i] = mazo[i] * -1;
            repartidas++;
        }
        else{
            i++;
        }
    }

}

bool tieneFlor(int mano[]){
   int numero;
   string palo1, palo2, palo3;

   obtenerNaipe(mano[0], numero, palo1);
   obtenerNaipe(mano[1], numero, palo2);
   obtenerNaipe(mano[2], numero, palo3);

   if (palo1 == palo2 && palo2 == palo3){
        return true;
   }
   else{
        return false;
   }
}









