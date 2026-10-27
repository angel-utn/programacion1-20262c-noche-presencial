#include <iostream>
using namespace std;

void cargarDatos(int ventasArt[]);
void mostrarVentasxArticulo(int ventasArt[], int cant);
void mostrarArticulosSinVentas(int ventasArt[], int cant);

int main()
{
    const int ART = 10;
    int ventasArt[ART] = {};

    cargarDatos(ventasArt);
    mostrarVentasxArticulo(ventasArt, ART);
    mostrarArticulosSinVentas(ventasArt, ART);

    return 0;
}


void cargarDatos(int ventasArt[]){
    int nart, cant;

    cout << "Número de artículo: ";
    cin >> nart;

    while (nart != 0){
        cout << "Cantidad vendida: ";
        cin >> cant;

        ventasArt[nart-1] += cant;

        cout << "-----------------------------" << endl;

        cout << "Número de artículo: ";
        cin >> nart;
    }
}

void mostrarVentasxArticulo(int ventasArt[], int cant){
    int i;
    cout << endl;
    cout << "Total vendido:" << endl;
    cout << "---------------------------" << endl;
    for(i=0; i<cant; i++){
        cout << "Art: " << i+1 << " -- Ventas: " << ventasArt[i] << endl;
    }
}

void mostrarArticulosSinVentas(int ventasArt[], int cant){
    int i;
    cout << endl;
    cout << "Artículos sin ventas:" << endl;
    cout << "---------------------------" << endl;
    for(i=0; i<cant; i++){
        if (ventasArt[i] == 0){
            cout << i+1 << " ";
        }
    }

}



















