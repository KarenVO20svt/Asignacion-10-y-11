#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	//Entrada
	long long codigo;
	int nU, dia, mes, a�o;
	char F, fragil, vencimiento;
	char PP, PP1;
	char S, N;
	cout << "Ingrese codigo:" << endl;
	cin >> codigo;

	//L�gica
	nU = codigo / 10000000000000;
	codigo = codigo % 10000000000000;
	F = codigo / 1000000000000;
	codigo = codigo % 1000000000000;
	PP = codigo / 10000000000;
	codigo = codigo % 10000000000;
	PP1 = codigo / 100000000;
	codigo = codigo % 100000000;
	dia = codigo / 1000000;
	codigo = codigo % 1000000;
	mes = codigo / 10000;
	codigo = codigo % 10000;
	a�o = codigo;
	
	fragil = (F == 0)*'S' + (F != 0)*'N';
	vencimiento = (a�o >= 2015)*'S' + (a�o < 2015)*'N';

	//Salida
	cout << "Numero unico: " << nU << endl;
	cout << "Fragil (N:No; S:Si): " << fragil << endl;
	cout << "Pais de procedencia: " << PP << PP1 << endl;
	cout << "Dia , mes y anio de vencimiento: " << dia << "-" << mes << "-" << a�o << endl;
	cout << "Bien se encuentra vencido al dia de hoy (N:No; S:Si): " << vencimiento << endl;

	_getch();
}