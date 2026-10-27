#include "funciones.h"

bool esBisiesto(int anio){

    if(anio % 400 == 0){
        return true;
    }
    if (anio % 100 == 0){
        return false;
    }
    if (anio % 4 == 0){
        return true;
    }
    return false;
}

int DiasTranscurridos(int dia, int mes, int anio){
    int diasEnMes[12] = {
        31, // Enero
        28, // Febrero
        31, // Marzo
        30, // Abril
        31, // Mayo
        30, // Junio
        31, // Julio
        31, // Agosto
        30, // Septiembre
        31, // Octubre
        30, // Noviembre
        31  // Diciembre
    };

    if (esBisiesto(anio) == true){
        diasEnMes[1]++;
    }

    int diasTranscurridos = 0, i;

    for (i = 0; i < mes-1; i++){
        diasTranscurridos+= diasEnMes[i];
    }

    diasTranscurridos += dia;

    return diasTranscurridos;

}
