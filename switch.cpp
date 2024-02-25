#include <iostream>

using namespace std;

main(){
	int codigo= 0;
	cout<<"Ingrese el codigo de area: ";
	cin>> codigo;
	//forma incorrecta
	if(codigo== 502){
		cout<<"guatemala"<<endl;
	}
	if(codigo== 503){
		cout<<"el salvador"<<endl;
	}	
	if(codigo== 504){
		cout<<"honduras"<<endl;
	}
	if(codigo== 505){
		cout<<"nicaragua"<<endl;
	}
	//switch case
	switch(codigo){
		case 501: cout<< "Belice"<<endl;
		break;
		case 502: cout<< "guatemala"<<endl;
		break;
		case 503: cout<< "el salvodor"<<endl;
		break;		
		case 504: cout<< "honduras"<<endl;
		break;
		case 505: cout<< "nicaragua"<<endl;
		break;
		case 506: cout<< "costa rica"<<endl;
		break;
		case 507: cout<< "panama"<<endl;
		break;
		default: cout<< "Este codigo no es de centroamerica"<<endl;
	}
	
	
	
	system("pause");
}
