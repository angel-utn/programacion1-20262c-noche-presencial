#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "funciones.h"

int main()
{
    srand(time(0));
    int mazo[40], mano1[3], mano2[3];
    inicializar(mazo);
    mezclar(mazo);

    mostrarMazo(mazo, 40);

    repartir(mazo, mano1, 3);
    repartir(mazo, mano2, 3);

    cout << endl << "MANO 1" << endl;
    mostrarMazo(mano1, 3);

    cout << endl << "MANO 2" << endl;
    mostrarMazo(mano2, 3);


    bool flor = tieneFlor(mano1);
    if (flor == true){
        cout << "Mano 1 tiene flor" << endl;
    }

    flor = tieneFlor(mano2);
    if (flor == true){
        cout << "Mano 2 tiene flor" << endl;
    }

    return 0;
}
