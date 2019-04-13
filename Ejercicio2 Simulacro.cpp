#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	//Entrada
	long long codigo;
	int d, m, a, p;
	char t;
	cout << " Ingrese codigo de barras:" << endl;
	cin >> codigo;
	
	//Lógica
	d = codigo / 10000000000;
	codigo = codigo % 10000000000;
	m = codigo / 100000000;
	codigo = codigo % 100000000;
	a = codigo / 10000;
	codigo = codigo % 10000;
	t = codigo / 100;
	codigo = codigo % 100;
	p = codigo;

	//Salida
	cout << " Dia de vencimiento: " << d << endl;
	cout << " Mes de vencimiento: " << m << endl;
	cout << " Anio de vencimiento: " << a << endl;
	cout << " Tipo de producto: " << t << endl;
	cout << " Producto perecible (0:No, 1:Si)" << (p == 0) * 1 + (p != 0) * 0 << endl;


	_getch();
}