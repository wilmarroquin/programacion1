#include <iostream>

using namespace std;

main(){
	/*int edad, *p_edad;
	p_edad= &edad;
	cout<<"ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}*/
	
//Utilizando puntero dentro de un arreglo

	/*int total= 0;
	int notas[total];
	char res;
	int *p_notas= notas;
	do{
		cout<<"Ingrese nota: "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor(s/S): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	cout<<"------Mostrar Notas......."<<endl;
	for(int i=0; i<total;i++){
		cout<<"Notas ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;	
	}*/

// Punteros con asignacion de memoria dinamica
// new = reservar un espacio en memeoria
// delete [] = Liberar memoria
// C++ no cuenta con un recolector de basura

	//puntero unidimensional
	/*int total= 0, *p_notas;
	p_notas= new int [total];
	char res;
	
	do{
		cout<<"Ingrese nota: "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor(S/s): ";
		cin>>res;
	}while(res=='s'||res=='S');

	cout<<"------Mostrar Notas......."<<endl;
	for(int i=0; i<total;i++){
		cout<<"Notas ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;	
	}
	delete[] p_notas;*/

	//Puntero bidimensionales
	int fil= 0, col= 0, **pm_notas;
	cout<<"ingrese los Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese las cantidad de notas por estudiante: ";
	cin>> col;
	
	pm_notas= new int * [fil];
	for(int i=0; i<fil; i++){
		pm_notas[i] = new int[col];
	}
	for(int i=0l;i<fil; i++){
		cout<<"_______________Estudiante________"<<i<<endl;
		for(int j=0; j<col; j++){
			cout<<"Nota: "<<j<<" : ";
			cin>> *(*(pm_notas+i)+j);
		}
		cout<<"________________________________"<<endl;
	}
	cout<<"-------Mostrar Notas---------"<<endl;
	for(int i= 0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<< *(*(pm_notas+i)+j)<<endl;
		}
		cout<<"------------------------"<<endl;
	}
	for(int i=0; i<fil; i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
}
