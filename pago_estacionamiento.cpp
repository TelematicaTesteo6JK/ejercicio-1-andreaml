#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

String pruebaFuncion(float valorEsperado, float valorReal) {
	if (valorEsperado == valorReal) {
		return "Pass";
	} else {
		return "Fail";
	}
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl << endl;
    // Agrega tus casos de prueba
	cout << "--> Equivalence Partitioning <--" << endl;
	cout << "Test data\tExpected result\tActual result" <<  endl;
	cout << -2 	<< "\t" << 0 	<< pago_estacionamiento(-2) << "\t" + pruebaFuncion(0.0, pago_estacionamiento(-2))	<< endl;
	cout << 3 	<< "\t" << 30	<< pago_estacionamiento(3) 	<< "\t" + pruebaFuncion(30, pago_estacionamiento(3))	<< endl;
	cout << 8 	<< "\t" << 72	<< pago_estacionamiento(8) 	<< "\t" + pruebaFuncion(72, pago_estacionamiento(8))	<< endl;
	cout << 22 	<< "\t" << 154	<< pago_estacionamiento(22) << "\t" + pruebaFuncion(154, pago_estacionamiento(22))	<< endl << endl;
	
	cout << "--> Equivalence Partitioning <--" << endl;
	cout << 0 	<< "\t" << 0	<< pago_estacionamiento(0) 	<< "\t" + pruebaFuncion(0, pago_estacionamiento(0))		<< endl;
	cout << 1 	<< "\t" << 10	<< pago_estacionamiento(1) 	<< "\t" + pruebaFuncion(10, pago_estacionamiento(1))	<< endl;
	cout << 5 	<< "\t" << 50	<< pago_estacionamiento(5) 	<< "\t" + pruebaFuncion(50, pago_estacionamiento(5))	<< endl;
	cout << 6 	<< "\t" << 54	<< pago_estacionamiento(6) 	<< "\t" + pruebaFuncion(54, pago_estacionamiento(6))	<< endl;
	cout << 10 	<< "\t" << 90	<< pago_estacionamiento(10) << "\t" + pruebaFuncion(90, pago_estacionamiento(10))	<< endl;
	cout << 11 	<< "\t" << 77	<< pago_estacionamiento(11) << "\t" + pruebaFuncion(77, pago_estacionamiento(11))	<< endl;
	cout << 23 	<< "\t" << 161	<< pago_estacionamiento(23) << "\t" + pruebaFuncion(161, pago_estacionamiento(23))	<< endl;
	cout << 25 	<< "\t" << 175	<< pago_estacionamiento(25) << "\t" + pruebaFuncion(175, pago_estacionamiento(25))	<< endl;

    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
