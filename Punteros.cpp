#include<iostream>

using namespace std;

main(){
	int edad= 25, *p_edad;
	p_edad= &edad;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<< *p_edad<<endl;//Para mostrar el valor donde esta ubucado el puntero tiene que llevar * al principio
	cout<<"Valor en memoria: "<< p_edad<<endl;// muestra el valor en memoria.
	
	cout<<"------Cambiar valores-------"<<endl;
	*p_edad= 40;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<< *p_edad<<endl;
	cout<<"Valor en memoria: "<< p_edad<<endl;
	
	cout<<"------Otra variable a p_edad valores -----------"<<endl;
	int edad2= 100;
	p_edad= &edad2;
	edad= 400;
	cout<<"variable edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<< *p_edad<<endl;
	cout<<"Variable edad2: "<<edad2<<endl;
	cout<<"Valor en memoria: "<< p_edad<<endl;
	system("pause");
}
