/**
Un kiosco desea registrar la información de una venta.
Los datos que la componen son los siguientes:
- Nombre del producto
- Precio unitario del producto
- Cantidad de unidades vendidas
- Con cuánto abona el cliente

Requiere un programa que pueda ingresar la
información de una venta y calcular el importe a pagar y
el vuelto.

KIOSCO UTN
--------------------------
PRODUCTO : Alfajor
PRECIO UNITARIO : $ 900.5
UNIDADES : 2
ABONA CON: $ 2000
--------------------------
TOTAL A PAGAR: $ 1801
VUELTO: $ 199

*/

#include <iostream>
using namespace std;

int main(){
  string nombreProducto;
  const float DMAYOR = 0.25f;
  const float DMEDIO = 0.1f;
  const float DMENOR = 0.05f;
  const float TOPE_DESCUENTO = 2000;

  float precioUnitario, importeVenta, abonaCon, vuelto, descuento = 0, importeFinal;
  int cant;

  cout << "Nombre del producto: ";
  cin >> nombreProducto;

  cout << "Precio unitario: $";
  cin >> precioUnitario;

  cout << "Cantidad de unidades: ";
  cin >> cant;

  cout << "Abona con: $";
  cin >> abonaCon;

  importeVenta = precioUnitario * cant;

  /// Cálculo del descuento
  if (importeVenta > 10000){
    descuento = importeVenta * DMAYOR;
  }
  else if (importeVenta > 5000){
    descuento = importeVenta * DMEDIO;
  }
  else if (importeVenta > 2500){
    descuento = importeVenta * DMENOR;
  }

  /// Definir tope de descuento
  if (descuento > TOPE_DESCUENTO){
    descuento = TOPE_DESCUENTO;
  }

  importeFinal = importeVenta - descuento;
  vuelto = abonaCon - importeFinal;

  cout << endl << endl;

  cout << "KIOSCO UTN                  " << endl;
  cout << "--------------------------  " << endl;
  cout << "PRODUCTO : " << nombreProducto << endl;
  cout << "PRECIO UNITARIO : " << precioUnitario << endl;
  cout << "UNIDADES : " << cant << endl;
  cout << "ABONA CON: $ " << abonaCon << endl;
  cout << "DESCUENTO: $ " << descuento << endl;
  cout << "--------------------------  " << endl;
  cout << "TOTAL A PAGAR: $  " << importeFinal << endl;

  if (vuelto >= 0){
    cout << "VUELTO: $ " << vuelto << endl;
  }
  else{
    cout << "DEBE  : $ " << vuelto*-1 << endl;
  }




  return 0;
}
