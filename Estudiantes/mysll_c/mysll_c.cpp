#include <iostream>
#include "Tipo_sangre.h"

using namespace std;

int main() {
	string codigo, nombres, apellidos, direccion, fecha_nacimiento, id_tipo_sangre;
	int telefono = 0, id = 0;
	Tipo_sangre ts = Tipo_sangre();
	ts.leer();
	cout << "id:";
	cin >> id;
	cin.ignore();
	cout << "Ingrese Codigo:";
	getline(cin, codigo);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin >> fecha_nacimiento;
	ts = Tipo_sangre (codigo, nombres, apellidos, direccion, fecha_nacimiento, id_tipo_sangre, id);
	ts.actualizar();
	ts.leer();
	cout << "Ingrese ID:";
	cin >> id;
	ts.setId(id);
	ts.borrar();
	ts.leer();

	

	system("pause");
	return 0;
}