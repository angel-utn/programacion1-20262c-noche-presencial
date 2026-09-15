#include <iostream>
using namespace std;

int main(){
    float precio, totalVenta = 0.0f;
    int cant = 0;

    cout << "Precio del producto: $ ";
    cin >> precio;

    while(precio != 0){
        totalVenta += precio;
        cant++;

        cout << "Precio del producto: $ ";
        cin >> precio;
    }

    cout << "----------------------" << endl;
    cout << "Total de la venta : $ " << totalVenta << endl;
    cout << "Cantidad productos: " << cant << endl;



    return 0;
}
