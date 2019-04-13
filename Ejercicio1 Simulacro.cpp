#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	//Entrada
	double Aexp, S, Stotal;
	char lugarN;

	cout << "Anios de experiencia:" << endl;
	cin >> Aexp;
	cout << "Lugar de nacimiento:" << endl;
	cin >> lugarN;

	//Lógica
	S = (Aexp == 0) * 900 + (Aexp >= 1 && Aexp <= 5) * (900 + Aexp / 100 * 900) + (Aexp > 5) * (1000 + Aexp / 100 * 900);
	Stotal = (lugarN == 'L') * S * 1.15 + (lugarN == 'F') * S * 1.20;

	//Salida
	cout << "El sueldo del trabajador seria:" << Stotal << endl;

	_getch();
}