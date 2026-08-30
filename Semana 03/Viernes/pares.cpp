#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;
    int cantPar = 0;

    cout << "Ingrese numero: ";
    cin >> n1;
    cout << "Ingrese numero: ";
    cin >> n2;
    cout << "Ingrese numero: ";
    cin >> n3;

    if(n1%2 == 0){
        cantPar++;
    }

    if(n2%2 == 0){
        cantPar++;
    }

    if(n3%2 == 0){
        cantPar++;
    }

    if(cantPar == 3){
        cout << "Son todos pares" << endl;
    }
    else if (cantPar == 0){
        cout << "No hay pares" << endl;
    }
    else {
        cout << "Hay algun par" << endl;
    }

    return 0;
}

