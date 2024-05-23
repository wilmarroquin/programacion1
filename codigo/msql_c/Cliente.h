#include <mysql.h>
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include "Persona.h"

using namespace std;


class Cliente : Persona {
	//atributos
private: string nit;

	   //constructor
public:
	Cliente() {}

	Cliente(string nom, string ape, string dir, int tel, string fn, string n)
		: Persona(nom, ape, dir, tel, fn) {
		nit = n;
	}
	//metodos
	// set (Modificar)
	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombres = nom; }
	void setApelldios(string ape) { apellidos = ape; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }
	// get (mostrar)
	string getNit() { return nit; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
	// metodos

	void crear() {
		int q_estado;
		ConexionDB cn = ConexionDB();
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string puesto;
			cout << "ingrese puesto: ";
			cin >> puesto;
			string t = to_string(telefono);
			string insert = "INSERT INTO Clientes(nit, nombres, apellidos, direccion, telefono, fecha_nacimiento) VALUES ('" + nit + ", '" + nombres + "', '" + apellidos + ", '" + direccion + ", '" + t + ",'" + fecha_nacimiento + ",)";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "ingreso exisitosa..." << endl;
			}
			else {
				cout << "error al ingresar..." << endl;
			}

		}
		else {
			cout << "Error el la creacion..." << endl;
		}
		cn.cerrar_conexion();
	}

	void leer() {
		int q_estado;
		ConexionDB cn = ConexionDB();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string consulta = "select * from  clientes";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << ", " << fila[1] << ", " << fila[2] << ", " << fila[3] << ", " << fila[4] << ", " << fila[5] << ", " << fila[6] << endl;
				}

			}
			else {
				cout << "error al consultar ..." << endl;
			}
		}
		else {
			cout << "Error el la conexion..." << endl;
		}
		cn.cerrar_conexion();

	}
};
