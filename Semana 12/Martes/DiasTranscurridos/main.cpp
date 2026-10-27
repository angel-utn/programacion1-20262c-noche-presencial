#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
    int dias = DiasTranscurridos(31, 12, 2026);

    cout << "Transcurrieron " << dias << " días." << endl;


    return 0;
}
