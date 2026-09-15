#include<iostream>
using namespace std;
/**
   Ahora... que pasaria si no fueran los 25 alumnos?

   Un profesor quiere pasar las notas de sus alumnos
   para ellos nos solicita un programa que pida cada una de las notas 
   de cada alumno y luego informe la cantidad de aprobador (nota >= 6)
   en caso de que mas de la mitad desapruebe debe mostrar un mensaje
   indicando "Se debe repasar el tema"

   El programa debe finalizar cuando se ingresa una nota igual a cero.

   
*/

int fmain() {
	int cantAprobados, cantNotas, nota;

	cantAprobados = 0;
	cantNotas = 0;

	cout << "Ingrese la nota del alumno: ";
	cin >> nota;

	while (nota!=0) {
		cantNotas++;

		if (nota>=6) {
			cantAprobados++;
		}

        cout << "Ingrese la nota del alumno: ";
		cin >> nota;
	}
	cout << "Cantidad de aprobados: " << cantAprobados << endl;

	if (cantAprobados<=(cantNotas/2)) {
		cout << "Se debe repasar el tema" << endl;
	}
	return 0;
}

