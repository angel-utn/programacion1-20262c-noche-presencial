#include <iostream>
using namespace std;

int main(){
    const int COSTO_VIAJE = 600000;
    float deposito, ahorro = 0.0f;
    int cantDepositos = 0;

    while (ahorro < COSTO_VIAJE){
        cout << "Ingrese deposito: $ ";
        cin >> deposito;

        ahorro += deposito;
        cantDepositos++;
    }

    cout << "Objetivo cumplido! Ahorraste $ " << ahorro << endl;
    cout << "Cantidad de depositos: " << cantDepositos << endl;

    return 0;
}
