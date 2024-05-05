#include <iostream>


using namespace std;
struct Alumnos{
	int codigo;
	string nombres;
	string apellidos;
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float promedio;
	string estado;
};
int n_alumnos;

main(){
	cout<<"Ingres de cantidad de alumnos a evaluar: ";
	cin>> n_alumnos;
	
	Alumnos alumnos[n_alumnos];
	
	for(int i= 0; i < n_alumnos; i++){
		cout << "\nEstudiante " << i + 1 << ":" << endl;
    	cout << "ID: ";
    	cin >> alumnos[i].codigo;
    	cout << "Nombre: ";
    	cin >> alumnos[i].nombres;
    	cout << "Apellidos: ";
    	cin >> alumnos[i].apellidos;
    	cout << "Nota 1: ";
    	cin >> alumnos[i].nota1;
    	cout << "Nota 2: ";
    	cin >> alumnos[i].nota2;
    	cout << "Nota 3: ";
    	cin >> alumnos[i].nota3;
    	cout << "Nota 4: ";
    	cin >> alumnos[i].nota4;
	}
	
	for (int i = 0; i < n_alumnos; i++){
    alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3 + alumnos[i].nota4) / 4.0;
    if (alumnos[i].promedio >= 60.0) {
		alumnos[i].estado = "Aprobdo";
    	}else{   	
      		alumnos[i].estado = "Reprobado";
    	}
 	}
	
	cout << "\nResultados:" << endl;
  cout << "-----------------------------------------------------------------------------------------" << endl;
  cout << "| ID - Nombre y Apellidos | Nota 1 - Nota 2 - Nota 3 - Nota 4 | Promedio | Estado |" << endl;
  cout << "-----------------------------------------------------------------------------------------" << endl;
  for (int i = 0; i < n_alumnos; i++){
    cout << "| " << alumnos[i].codigo << " - " << alumnos[i].nombres << " " << alumnos[i].apellidos << " | " << alumnos[i].nota1 << " - " << alumnos[i].nota2 << " - " << alumnos[i].nota3 << " - " << alumnos[i].nota4 << " | " << alumnos[i].promedio << " | " << alumnos[i].estado << " |" << endl;
	}
	cout << "-----------------------------------------------------------------------------------------" << endl;
	
	
	
	
	system("pause");
}
