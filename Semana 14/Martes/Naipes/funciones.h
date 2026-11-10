#pragma once
#include <string>
using namespace std;

void inicializar(int mazo[]);
void mostrarMazo(int mazo[], int cant);
void obtenerNaipe(int codigo, int &numero, string &palo);
void mezclar(int mazo[]);
void repartir(int mazo[], int mano[], int cant);
bool tieneFlor(int mano[]);
