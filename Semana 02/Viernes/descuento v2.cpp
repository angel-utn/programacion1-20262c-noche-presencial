#include<iostream>
using namespace std;

int main() {
	float monto;
	cout << "Ingrese monto: " << endl;
	cin >> monto;
   
	if (monto>=25000) {
      monto = monto*0.9f;
	}
	cout << "Debe pagar: " << monto << endl;
	return 0;
}

