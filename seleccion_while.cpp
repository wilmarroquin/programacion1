#include <iostream>

using namespace std;

main(){
	// ciclo while para incrementar
	/*int i= 0;
	while(i<5){
		i++; // no toma en cuenta 0 ya imprime despues de incrementar (0+1=1) y lluego imprime
		cout<<i<<endl;
		i++; //toma en cuenta 0 ya que incrementa despues de imprimir 
	}*/
	
	//El ciclo while primero valida y luego ejecuta 
	//ciclo while para disminuir
	/*int i= 5;
	while(i>0){
		//i--; // no toma en cuenta el 5 ya que disminuye antes de imprimeir (5-1=4)
		cout<<i<<endl;
		i--; //toma en cuenta 5 ya imprime primero  y luego disminuye
	}*/
	
	// Ciclo do while primero ejecuta y despues valida.
	/*int i= 0;
	do{
		i++; 
		cout<<i<<endl;
		//i++; 
	}while(i<5);*/
	
	//ejemplo diferencia entre while y do while
	/*int i= 5;
	while(i<5){
		cout<<"while: "<<i<<endl;
		i++;
	}
	
	int ii= 5;
	do{
		cout<<"do while: "<<ii<<endl;
		ii++;		
	}while(ii<5);*/
	
	/*char respuesta;
	do{
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>> respuesta;
	}while(respuesta=='s' || respuesta== 'S');*/
	
	char respuesta= 's';
	while(respuesta=='s' || respuesta== 'S'){
		cout<<"Desea ingresar otro valor(s/n): ";
		cin>>respuesta;
	}
		
	system("pause");
}
