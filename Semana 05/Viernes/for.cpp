#include<iostream>
using namespace std;
/**
   Un profesor quiere pasar las notas de sus 25 alumnos
   para ellos nos solicita un programa que pida cada una de las notas 
   de cada alumno y luego informe la cantidad de aprobador (nota >= 6)
   en caso de que mas de la mitad desapruebe debe mostrar un mensaje
   indicando "Se debe repasar el tema"
*/

int main() {
	int cant, nota;
	
   cant = 0;
	for (int i=1;i<=25;i++) {
      cout << "Ingrese nota: ";
		cin >> nota;
      
		if (nota>=6) {
			cant++;
		}
	}
	
   cout << "La cantidad de alumnos aprobados son: " << cant << endl;
	
   if (cant<=25/2) {
		cout << "Se debe repasar el tema" << endl;
	}
	
   return 0;
}

