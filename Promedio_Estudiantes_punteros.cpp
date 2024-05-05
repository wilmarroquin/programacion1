#include <iostream>

using namespace std;
struct Alumnos{
	int codigo;
	char nombres[50];
	char apellidos[50];
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float promedio;
	bool aprobado;
};
int n_alumnos;


void ingresaralumnos(Alumnos *alumnos){
	cout << "ID: ";
    cin >> alumnos->codigo;
    cin.ignore();
	cout << "Nombre: ";
    cin.getline(alumnos->nombres, 50);
    cout << "Apellidos: ";
    cin.getline(alumnos->apellidos, 50);
    cout << "Nota 1: ";
    cin >> alumnos->nota1;
    cout << "Nota 2: ";
    cin >> alumnos->nota2;
    cout << "Nota 3: ";
    cin >> alumnos->nota3;
    cout << "Nota 4: ";
    cin >> alumnos->nota4;
    
    alumnos->promedio = (alumnos->nota1 + alumnos->nota2 + alumnos->nota3 + alumnos->nota4) / 4;
    
    if (alumnos->promedio >= 60) {
        alumnos->aprobado = true;
    } else {
        alumnos->aprobado = false;
    }    
    
}

void resultadosalumnos(Alumnos *alumnos){
	cout << "-----------------------------------------------------------------------------------------";
	cout << "\nDatos del estudiante: " << endl;
	cout << "ID: " << alumnos->codigo << endl;
	cout << "Nombre: " << alumnos->nombres << endl;
	cout << "Apellidos: " << alumnos->apellidos << endl;
	cout << "Promedio segun notas ingresadas: " << alumnos->nota1 <<" - "<< alumnos->nota2<< " - "<< alumnos->nota3 <<" - " << alumnos->nota4<< " | "<< alumnos->promedio << " | "<<endl;
	cout << "Estado: ";
	if (alumnos->aprobado){
        cout << "Aprobado"<<endl;
    }else{
        cout << "No aprobado"<<endl;
    }

}

main(){
	Alumnos *alumnos;
	
	cout<<"Ingres de cantidad de alumnos a evaluar: ";
	cin>> n_alumnos;
	
	alumnos = new Alumnos[n_alumnos];
	
    for (int i = 0; i < n_alumnos; i++) {
        cout << "Ingrese los datos del estudiante " << i + 1 << ":" << endl;
        ingresaralumnos(&alumnos[i]);
    }

    cout << "\nDatos de los estudiantes:" << endl;
    for (int i = 0; i < n_alumnos; i++) {
        resultadosalumnos(&alumnos[i]);
    }
	cout<< endl;
    delete[] alumnos;
	
	system("pause");
}
