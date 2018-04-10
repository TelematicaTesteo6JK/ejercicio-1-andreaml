#include <iostream>
#include <string>
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

string pruebaFuncion(float valorEsperado, float valorReal) {
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
	cout << -2 	<< "\t\t" << "Error"<< "\t\t" <<	pago_estacionamiento(-2)	<< "\t\t" + pruebaFuncion(-1, pago_estacionamiento(-2))<< endl;
	cout << 3 	<< "\t\t" << 30		<< "\t\t" <<	pago_estacionamiento(3) 	<< "\t\t" + pruebaFuncion(30, pago_estacionamiento(3))	<< endl;
	cout << 8 	<< "\t\t" << 72		<< "\t\t" <<	pago_estacionamiento(8) 	<< "\t\t" + pruebaFuncion(72, pago_estacionamiento(8))	<< endl;
	cout << 22 	<< "\t\t" << 154	<< "\t\t" <<	pago_estacionamiento(22) 	<< "\t\t" + pruebaFuncion(154, pago_estacionamiento(22))<< endl << endl;
	
	cout << "--> Equivalence Partitioning <--" << endl;
	cout << "Test data\tExpected result\tActual result" <<  endl;
	cout << 0 	<< "\t\t" << "Error"<< "\t\t" <<	pago_estacionamiento(0)		<< "\t\t" + pruebaFuncion(-1, pago_estacionamiento(0))		<< endl;
	cout << 1 	<< "\t\t" << 10		<< "\t\t" <<	pago_estacionamiento(1) 	<< "\t\t" + pruebaFuncion(10, pago_estacionamiento(1))		<< endl;
	cout << 5 	<< "\t\t" << 50		<< "\t\t" <<	pago_estacionamiento(5) 	<< "\t\t" + pruebaFuncion(50, pago_estacionamiento(5))		<< endl;
	cout << 6 	<< "\t\t" << 54		<< "\t\t" <<	pago_estacionamiento(6) 	<< "\t\t" + pruebaFuncion(54, pago_estacionamiento(6))		<< endl;
	cout << 10 	<< "\t\t" << 90		<< "\t\t" <<	pago_estacionamiento(10)	<< "\t\t" + pruebaFuncion(90, pago_estacionamiento(10))		<< endl;
	cout << 11 	<< "\t\t" << 77		<< "\t\t" <<	pago_estacionamiento(11) 	<< "\t\t" + pruebaFuncion(77, pago_estacionamiento(11))		<< endl;
	cout << 23 	<< "\t\t" << 161	<< "\t\t" <<	pago_estacionamiento(23) 	<< "\t\t" + pruebaFuncion(161, pago_estacionamiento(23))	<< endl;
	cout << 25 	<< "\t\t" << "Error"<< "\t\t" <<	pago_estacionamiento(25) 	<< "\t\t" + pruebaFuncion(-1, pago_estacionamiento(25))		<< endl;

    cout << endl;

}

int main()
{
    casos_de_prueba();
	return 0;
}
