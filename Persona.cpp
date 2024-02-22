#include <iostream>

using namespace std;

class Persona{
	//atributo
	protected: string nombres, apellidos, direccion;
	int telefono;
	//consutructor
	protected:
		Persona(){	
		}
		Persona(string nom, string ape, string dir, int tel){
			nombres= nom;
			apellidos= ape;
			direccion= dir;
			telefono= tel;
		}		
	//meotodo
	void mostrar();
};
