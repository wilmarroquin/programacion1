#include <iostream>

using namespace std;
/*funcion que sume dos numeros ejemplo: se cambia el signo positovo
por el negativo la funcion cambia de sumar a restar*/
/*int suma(int num1, int num2){
	int resultado= 0;
	resultado= num1 + num2;
	return resultado;
}
int resta(int num1, int num2){
	int resultado= 0;
	resultado= num1 - num2;
	return resultado;
}*/
/*sobrecarga de metodo es cuando una funcion o metodo tiene el mismo nombre
pero difente cantidad de variables*/
/*int suma(int num1, int num2){
	int resultado= 0;
	resultado= num1 + num2;
	return resultado;
}
int suma(int num1, int num2, int num3){
	int resultado= 0;
	resultado= num1 + num2 + num3;
	return resultado;
}*/
//metodo
//parametros por valor
/*void suma(int num1, int num2){
	int resultado= 0;
	num1 +=1; // 11
	num2 +=1; // 21
	resultado= num1 + num2; //32
	cout<< resultado<<endl;
}*/

//Encabezado de funcion
void suma(int &num1, int &num2 );
main(){
	//cout<< suma3(10, 20, 40)<<endl;
	//parametros por valor
	int a= 10, b= 20;
	suma(a,b);
	cout<< "a: "<<a<<endl;
	cout<< "b: "<<b<<endl;
	
	system("pause");
}
//parametros por refencia
void suma(int &num1, int &num2){
	int resultado= 0;
	num1 +=1; // 11
	num2 +=1; // 21
	resultado= num1 + num2; //32
	cout<< resultado<<endl;
}

