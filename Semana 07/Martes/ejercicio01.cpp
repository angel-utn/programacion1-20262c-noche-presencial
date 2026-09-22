#include <iostream>
using namespace std;

int main(){
    int tec, celu, duracion, insumos, legajo;
    /// A
    int tiempoTotal;
    /// B
    int reparacionSinInsumos;
    /// C
    int reparacionMayoresDosHoras = 0;

    const int TECNICOS = 5;
    const int EQUIPOS = 10;

    for(tec=1; tec<=TECNICOS; tec++){

        tiempoTotal = 0;
        reparacionSinInsumos = 0;

        for(celu=1; celu<=EQUIPOS; celu++){
            cout << "Legajo: ";
            cin >> legajo;

            cout << "Duración: ";
            cin >> duracion;

            cout << "Insumos: ";
            cin >> insumos;

            /// Procesar registro
            ///A
            tiempoTotal += duracion;

            ///B
            if (insumos == 0){
                reparacionSinInsumos++;
            }

            ///C
            if (duracion > 120){
                reparacionMayoresDosHoras++;
            }
        }
        cout << endl << "Técnico: " << legajo << endl;
        cout << "A) Tiempo total: " << tiempoTotal << endl;
        cout << "B) Sin insumos : " << reparacionSinInsumos << endl << endl;
    }
    cout << "C) Reparaciones de mas de 2 horas: " << reparacionMayoresDosHoras << endl;
    return 0;
}
