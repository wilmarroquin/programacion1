#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese su Nit: ";
	cin>> nit;
	cout<< "Ingrese nombres: ";
	cin>> nombres;
	cout<<"Ingrese apellidos: ";
	cin>> apellidos;
	cout<< "Ingrese direcion: ";
	cin>> direccion;
	cout<< "Ingrese telefono: ";
	cin>> telefono;
	//instanciar el obejto
	/*Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	
	cout<<"Ingrese su Nit: ";
	cin>> nit;
	obj.setNit(nit);
	obj.mostrar();
	*/
	//Usando el constructor vacio, usando set
	Cliente obj= Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApelldios(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
}

