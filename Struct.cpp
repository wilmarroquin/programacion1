#include <iostream>

using namespace std;

/*struct Estudiante{
	int codigo[4]; 
	string nombre[4];
	int nota[4];
};*/

struct Estudiante{
	int *codigo; 
	string *nombre;
	int **notas;
};

main(){
	/*Estudiante estudiante;
	for(int i=0; i<4; i++){
		cout<<"______________________"<<endl;
		cout<<"ingrese codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"ingrese nombre completo: ";
		getline(cin,estudiante.nombre[i]);
		cout<<"ingrese nota: ";
		cin>>estudiante.nota[i];
	}

	for(int i=0; i<4; i++){
		cout<<"______________________"<<endl;
		cout<<"codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo: "<<estudiante.nombre[i]<<endl;
		cout<<"nota: "<<estudiante.nota[i]<<endl;
	}*/
	Estudiante estudiante;
	int fila= 0, columna= 0;
	cout<<"Cuantos Estudiantes desea agregar: ";
	cin>> fila;
	cout<<"Cuantas notas por estudiante desea Agregar: ";
	cin>> columna;
	
	estudiante.codigo= new int [fila];
	estudiante.nombre= new string [fila];
	estudiante.notas= new int *[fila];
	for(int i= 0; i< fila; i++){
		estudiante.notas[i]= new int [columna];	
	}
	cout<<"______________Ingreso de notas ______________"<<endl;
	for(int i=0; i< fila; i++){
		cout<<"codigo["<<i<<"]: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]: ";
		getline(cin,estudiante.nombre[i]);
		for (int ii= 0; ii< columna; ii++){
			cout<<"Ingrese nota["<<ii<<"]:";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"_________________________________"<<endl;
	}
	
	cout<<"______________Mostrar de notas ______________"<<endl;	
	for(int i=0; i< fila; i++){
		cout<<"codigo["<<i<<"]: "<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;
		for (int ii= 0; ii< columna; ii++){
			cout<<"Nota ingresada["<<ii<<"]:"<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"_________________________________"<<endl;
	}

	for(int i= 0; i< fila; i++){
		delete[] estudiante.notas[i];	
	}
	delete[] estudiante.notas;
	delete[] estudiante.nombre;
	delete[] estudiante.codigo;	

	system("pause");
}
