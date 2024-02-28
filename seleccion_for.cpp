#include <iostream> 

using namespace std;

main(){
	//int i=0;
	//int contar=0;

	//ciclo for para aumentar
	// i++, i+=1, i=i+1
	/*for(i=4; i<=8;i+=2){// 4 hasta 8
		cout<<i<<endl;
		contar++;
	}
	cout<<"ciclos: "<<contar<<endl;
	cout<<"i fuera: "<<i<<endl;*/
	
	// ciclo for para decrementar
	// i--, i-=1, i=i-1	
	/*for(int i=10; i>=0; i--){
		cout<<i<<endl;
	}*/
	
	//pueden ser int o float 
	/*for(int i=0; i<10; i++){
		if(i==5){
			cout<<"if"<<endl;
			//break; //para salir completamente del ciclo
			continue; //para contiunar en la sig. iteracion
		}
		cout<<i<<endl;	
	}*/
	//Aumentar en forma decimal
	/*for(float i=0; i<1; i+=0.1){
		cout<<i<<endl;
	}*/
	
	/*int datos[5]= {10, 40 , 100, 200, 3000};
	for(int i= 0; i<5;i++){
		cout<<datos[i]<<endl;
	}*/
	
	/*int tam= 5;
	int datos[tam]= {10, 40 , 100, 200, 3000};
	for(int i= 0; i<5;i++){
		cout<<datos[i]<<endl;
	}*/
	/*el tamaña de cada elemento de arreglo es de 4 bytes
	int tam= 0;
	int datos[]= {10, 40 , 100, 250, 300};
	tam= sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	*/
	
	//el tamaña de cada elemento de arreglo es de 4 bytes
	// cambiar el compilador de codigo lenguaje starndar (-std) a ISO C++11 par que funcione.
	/*int datos[]= {10, 40 , 100, 250, 300};
	for(int i : datos){
		cout<< i<<endl;
	}*/
	//ejemplo tabla de multiplicar usando for
	/*int tabla= 0, res= 0;
	cout<<"Ingrese tabla: ";
	cin>> tabla;
	for(int i= 1; i<=10;i++){
		res= tabla * i;
		cout<<tabla<<" x "<<i<<" = "<<res<<endl;
	}*/
	
	//ejemplo tabla de multiplicar usando for
	int inicio= 0, fin= 0, res= 0;
	cout<<"Ingres tabla inicial: ";
	cin>> inicio;
	cout<<"ingrese tabla final: ";
	cin>>fin;
	for(int rango= inicio;rango<=fin; rango++){
		cout<<"Tabla del: "<<rango<<endl;
		for(int i= 1; i<=10;i++){
			res= rango * i;
			cout<<rango<<" x "<<i<<" = "<<res<<endl;
		}
		cout<<endl;
	}
	
	system("pause");
}
