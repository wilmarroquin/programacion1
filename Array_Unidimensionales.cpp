#include <iostream>

using namespace std;

main(){
	/*Array= arreglo o colecciones o matriz
	se utilizan para almacenar varios valores en una sola variable*/
	// int nota1, nota2, nota3, nota4.... forma incorrecta para una cantidad grande
	/*int notas[4]; //{80,65,60,75} //nota1, nota2, nota3, nota4 el indice inicia en 0
	notas[0]= 80;
	notas[1]= 65;
	notas[2]= 60;
	notas[3]= 75;
	
	for(int i = 0; i<4;i++){
		cout<<i<<": "<<notas[i]<<endl;
	}
	
	cout<< notas[0]<<endl;
	cout<< notas[1]<<endl;	
	cout<< notas[2]<<endl;
	cout<< notas[3]<<endl;
	
	notas[2]= 70;
	cout<<"Valor modificado (2): "<<notas[2]<<endl;*/
	
	//forma dinamica
	
	/* forma donde el usuario ingresa la cantidad de notas
	que necesita obtener el promedio
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	cout<<"Cuantos notas deses ingresar: ";
	cin>> tam;
	//Solicitar datos al usuario
	for(int i = 0; i<tam;i++){
		cout<<"Ingrese la nota "<<i+1<<": ";
		cin>>notas[i];
	}
	//suma
	for(int i= 0; i<tam; i++){
		suma += notas[i];
	}
	//mostrar los datos solicitados
	for(int i = 0; i<tam;i++){
		cout<<notas[i]<<endl;
	}
	promedio= suma/ tam;
	cout<<"El promedio: "<<promedio<<endl;*/
	
	/*int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota: "<<tam<<": ";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n): ";
		cin>> res;
	}while(res=='s'||res=='S');
	
	//mostrar valores
	for(int i=0; i<tam;i++){
		cout<<notas[i]<<endl;
	}
	//calcular promedio
	for(int i= 0; i<tam; i++){
		suma+=notas[i];
	}
	promedio= suma/tam;
	cout<<"El promedio es: "<< promedio<<endl;*/
	
	//arreglo de char
	/*char nombre[30];
	cout<<"Ingres su nombre completo: ";
	cin.get(nombre,30);
	cout<<nombre<<endl;*/
	
	//arreglo de string
	/*string nombre;
	cout<<"Ingrese su nombre completo: ";
	getline(cin,nombre);
	cout<<nombre<<endl;*/
	
	/*string nombre;
	int dato;
	cout<<"ingrese el dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"ingrese nombre completo: ";
	getline(cin,nombre);
	cout<< nombre<<endl;*/
	
	string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","domingo"};
	
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	system("pause");
}
