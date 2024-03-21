#include <iostream>

using namespace std;

main(){
	//Arreglo bidimensionales, matriz, table
	/*int matriz[2][3]={{10,20,30},{40,50,60}};
	for(int i=0; i<2;i++){
		for(int j=0;j<3;j++){
			cout<<i<<","<<j<<": "<<matriz[i][j]<<endl;
		}
	}*/
	//forma dinamica
	int fil=0, col=0;
	int matriz [fil][col];
	cout<<"ingrese las filas: ";
	cin>> fil;
	cout<<"ingrese las columnas: ";
	cin>>col;
	cout<<"_______________Ingresar_____________"<<endl;
	for(int i=0; i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<i<<","<<j<<": ";
			cin>>matriz[i][j];
		}
	cout<<"___________________________________"<<endl;
	}	
	cout<<"_______________Mostrar_____________"<<endl;
	for(int i=0; i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<i<<","<<j<<": "<<matriz[i][j]<<endl;
		}
	}	
	
	system("pause");
}
