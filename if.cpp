#include <iostream>

using namespace std;

main(){
	/*
	// Numero es ppsitivo > 0 o negativo <0
	int num= 0;
	cout<< "Ingrese el numero: ";
	cin>>num;
	if(num>0){//> 0
		//entra cusndo la condicion es verdadra
		cout<< "Positivo"<<endl;
	}else{//<= 0
		if(num==0){// 0
			cout<<"Neutro"<<endl;
		}else{//< 0
			cout<<"Negativo"<<endl;
		}
	}
	*/
	/* //if usando string
	string pais="";
	cout<<"Ingrese pais: ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<" mi pais."<<endl;
	}else{
		cout<<"Mexico"<<endl;
	}
	*/
	//Determinar si un numero es par o impar
	int num=0;
	cout<<"Ingrese un numero ";
	cin>> num;
	if((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	//Determime su un numero es par o impar
	/*
	int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	if((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;	
	}*/
	
	// and (y) &&
	// or (o) ||
	char lapiz, lapicero, cuaderno;
	
	cout<<"Trae lapiz (s/n): ";
	cin>> lapiz;
	cout<<"Trae lapiecero (s/n): ";
	cin>> lapicero;
	cout<<"Trae cuaderno (s/n): ";
	cin>> cuaderno;
	//Puede entrar a la clase si usted trae lapiz y lapicero
	//and = El valor es verdadero si ambos son verdaderos
	/*if(lapiz=='s'&& lapicero=='s'){
		cout<<"Ingrese"<<endl;
	}else{
		cout<<"Lo siento no pude ingresar"<<endl;
	}*/
	//Puede entrar a la clase si usted trae lapiz o lapicero
	// or (o) = el valor verdadero si por lo menos uan es verdadera
	/*if(lapiz=='s'|| lapicero=='s'){
		cout<<"Ingrese"<<endl;
	}else{
		cout<<"Lo siento no pude ingresar"<<endl;
	}*/
	//Puede entrar a la clase si usted trae lapiz o lapicero y un cuaderno
	if((lapiz=='s'|| lapicero=='s')&& cuaderno=='s'){
		cout<<"Ingrese"<<endl;
	}else
		cout<<"Lo siento no pude ingresar"<<endl;
	}
	
	
	system ("pause");
}
