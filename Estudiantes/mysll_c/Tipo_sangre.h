#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "ConexionBD.h"
#include "Estudiantes.h"

using namespace std;

class Tipo_sangre : Estudiantes {
private: string tipo_sangre;
	   int id = 0;

public:
	Tipo_sangre() {

	}
	Tipo_sangre(string cod, string nom, string ape, string dir, int tel, string fn, int idt, string tp, int i) : Estudiantes(cod, nom, ape, dir, tel, fn, idt) {
		tipo_sangre = tp;
		id = i;
	}

	void setId(int i) { id = i; }
	void setCodigo(string cod) { codigo = cod; }
	void setNombres(string nom) { nombres = nom; }
	void setApelldios(string ape) { apellidos = ape; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }
	void setFecha_nacimiento(string fn) { fecha_nacimiento = fn; }
	void setId_tipo_sangre(int idt) { id_tipo_sangre = idt; }

	string getCodigo() { return codigo; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
	string getFecha_nacimiento() { return fecha_nacimiento; }
	int getId_tipo_sangre() { return id_tipo_sangre; }

	void crear() {
		int q_estado;
		ConexionBD cn = ConexionBD();

		cn.abrir_conexion();
		string t = to_string(telefono);
		string s = to_string(id_tipo_sangre);
		if (cn.getconectar()) {
			string  insertar = "INSERT INTO Estudiantes(codigo, nombres, apellidos, direccion, telefono, fecha_nacimiento, id_tipo_sangre) VALUES ('" + codigo + "','" + nombres + "','" + apellidos + "','" + direccion + "'," + t + ",'" + fecha_nacimiento + "', '" + s +"')";
			const char* i = insertar.c_str();
			// executar el query
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}

	void leer() {
		int q_estado = 0;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getconectar()) {
			cout << "------------ Datos de Estudiantes ------------" << endl;
			string consulta = "select * from  Estudiantes";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << ", " << fila[1] << ", " << fila[2] << ", " << fila[3] << ", " << fila[4] << ", " << fila[5] << ", " << fila[6] << fila[7] << fila[8]<< endl;
				}
			}
			else {
				cout << "Error en la conexion..." << endl;
			}
			cn.cerrar_conexion();

		}
	}

	void actualizar() {
		int q_estado;
		ConexionBD cn = ConexionBD();

		cn.abrir_conexion();
		string t = to_string(telefono);
		string s = to_string(id_tipo_sangre);
		string ii = to_string(id);
		if (cn.getconectar()) {
			string  actualizar =
				"update clientes set codigo = '" + codigo + "', nombres='" + nombres + "', apellidos = '" + apellidos + "', direccion = '" + direccion + "', telefono =" + t + ", fecha_nacimiento='" + fecha_nacimiento + ",id_tipo_sangre='" + s + "',' where id_cliente = " + ii + "";
			const char* i = actualizar.c_str();
			// executar el query
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "Actualizacion Exitosa ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}

	void borrar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string ii = to_string(id);
		if (cn.getconectar()) {
			string  borrar = "delete from clientes  where id_Estudiantes = " + ii + "";
			const char* i = borrar.c_str();
			// executar el query
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "Eliminacion Exitosa ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}

};
