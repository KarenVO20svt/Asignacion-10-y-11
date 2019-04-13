#include <iostream>
#include "conio.h"
using namespace std;
int main()
{
	//Entrada
	int sueldo, Ps, Pv, Pc, Pf, PTotal;
	char Tv, Tc, Cf;
	bool préstamo;
	cout << "Sueldo mensual:" << endl;
	cin >> sueldo;
	cout << "Tipo de vivienda (P: pariente; A: alquilada; M: propia):" << endl;
	cin >> Tv;
	cout << "Tarjeta de credito (N: no tiene; S: si tiene):" << endl;
	cin >> Tc;
	cout << "Tiene carga familiar (N: no tiene; S: si tiene):" << endl;
	cin >> Cf;

	//Lógica
	Ps = (sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
	Pv = (Tv == 'P') * 2 + (Tv == 'A') * 5 + (Tv == 'M') * 10;
	Pc = (Tc == 'N') * 0 + (Tc == 'S') * 6;
	Pf = (Cf == 'S') * 6 + (Cf == 'N') * 3;
	PTotal = Ps + Pv + Pc + Pf;
	préstamo = (PTotal > 20)*1 + (PTotal <= 20)*0;

	//Salida
	cout << "Puntaje Obtenido: " << PTotal << endl;
	cout << "Se le otorga el prestamo (0:No; 1:Si): " << préstamo << endl;

	_getch();
}