#include <iostream>


using namespace std;
struct Alumnos{
	int carnet;
	string nombres;
	string apellidos;
	string grado;
	string curso;
	float promedio;
	string estado;
};
int n_alumnos;

main(){
	cout<<"Ingres de cantidad de alumnos a evaluar: ";
	cin>> n_alumnos;
	
	cout<<"ingrese las catidad notas a calificar: ";
	cin>> n_notas;
	
	Alumnos alumnos[n_alumnos];
	
	for(int i= 0; i < n_alumnos; i++){
		cout<< "\nEstudiante " << i + 1 << ":" << endl;
		cout<<"-----------------------------------------"<<endl;
    	cout<< "Carnte:";
    	cin >> alumnos[i].carnet;
    	cout<< "Nombres: ";
    	cin>> alumnos[i].nombres;
    	cout << "Apellidos: ";
    	cin >> alumnos[i].apellidos;
    	cout << "Grado: ";
    	cin >> alumnos[i].grado;
    	cout << "Curso: ";
    	cin >> alumnos[i].curso;
	}
	
	for(int i= 0; < n_notas; i++){
		int contador= 0;
		cout<< "Ingrese nota "<< i+ 1<< ":"<<endl;
	}
	
	system("pause");
}
