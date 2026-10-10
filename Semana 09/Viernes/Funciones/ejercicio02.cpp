/**
Hacer una función que reciba la hora del día y el nombre de la persona y muestre "Buenos
días XXXX", "Buenas tardes XXXX" o "Buenas noches XXXX" según corresponda.
*/
#include <iostream>
using namespace std;

void saludar(int hora, string nombre, int idioma);

int main(){

    int hora;
    string persona;

    cout << "hora: ";
    cin >> hora;

    cout << "nombre: ";
    cin >> persona;

    saludar(hora, persona, 1);

    cout << "Saludó a " << persona << " en el horario " << hora << endl;

 return 0;
}

void saludar(int hora, string nombre, int idioma){

    if (idioma == 1){
        if (hora >= 4 && hora <= 12){
            cout << "Buenos días, ";
        }
        else if (hora > 12 && hora <= 19){
            cout << "Buenas tardes, ";
        }
        else{
            cout << "Buenas noches, ";
        }
    }
    else if (idioma == 2){
        if (hora >= 4 && hora <= 12){
            cout << "Good morning, ";
        }
        else if (hora > 12 && hora <= 19){
            cout << "Good afternoon, ";
        }
        else{
            cout << "Good night, ";
        }
    }
    else{
        return;
    }

    cout << nombre << endl;



}
