#include <iostream>
using namespace std;

int main(){
    int duracion, insumos, legajo, legajoAnterior;

    /// A
    int tiempoTotal;
    /// B
    int reparacionSinInsumos;
    /// C
    int reparacionMayoresDosHoras = 0;

    cout << "Legajo: ";
    cin >> legajo;

    while (legajo != 0){

        legajoAnterior = legajo;
        tiempoTotal = 0;
        reparacionSinInsumos = 0;

        while (legajo == legajoAnterior){
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

            cout << "Legajo: ";
            cin >> legajo;

        } /// Finaliza la carga de registros de un técnico

        cout << endl << "Técnico: " << legajoAnterior << endl;
        cout << "A) Tiempo total: " << tiempoTotal << endl;
        cout << "B) Sin insumos : " << reparacionSinInsumos << endl << endl;


    } /// Finaliza la carga general de datos
    cout << "C) Reparaciones de mas de 2 horas: " << reparacionMayoresDosHoras << endl;

    return 0;
}
