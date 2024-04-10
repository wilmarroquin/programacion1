#include <iostream>

using namespace std;

const char *nombre_archivo = "archivo.dat";
struct Estudiante{
	int codigo;
	char nombres[50];
	char apellidos[50];
	int telefono;
};
void Leer();
void Crear();
void Actualizar();
void Borrar();
main(){
	//archivo binario
	Leer();
	Crear();
	Borrar();
	Actualizar();
	
	system("pause");
}
void Leer(){
	system("cls");
	FILE* archivo= fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo= fopen(nombre_archivo, "w+b");
	}
	Estudiante estudiante;
	int id= 0; //indica o pocision del registro(fila) dentro del archivo
	fread(&estudiante,sizeof(Estudiante),1,archivo);
	cout<<"______________________________________________________"<<endl;
	cout<<"ID"<<"|"<<"Codigo      "<<"|"<<"Nombres      "<<"|"<<"Apellidos      "<<"|"<<"telefono"<<endl;
	do{
		cout<<id<<"|"<<estudiante.codigo<<"|"<<estudiante.nombres<<"|"<<estudiante.apellidos<<"|"<<estudiante.telefono<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);
		id+=1;
	}while(feof(archivo)==0);
	fclose(archivo);
}

void Crear(){
	FILE* archivo= fopen(nombre_archivo,"a+b");
	char res;
	do{
		fflush(stdin);
		Estudiante estudiante;
		cout<<"Ingrese Codigo: ";
		cin>> estudiante.codigo;
		cin.ignore();
		cout<<"Ingrese Nombres: ";
		cin.getline(estudiante.nombres,50);
		cout<<"Ingrese Apellidos: ";
		cin.getline(estudiante.apellidos,50);
		cout<< "Ingrese telefono: ";
		cin>> estudiante.telefono;
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		cout<<"Desea ingrear otro Estudiante: ";
		cin>> res;
	}while(res== 's'||res== 'S');
	fclose(archivo);
	Leer();
}

void Actualizar(){
	FILE* archivo= fopen(nombre_archivo,"r+b"); //crea y borra
	Estudiante estudiante;
	int id= 0;
	cout<<"Ingrse el ID que desea modificar: ";
	cin>>id;
	fseek(archivo,id * sizeof(estudiante),SEEK_SET);
	cout<<"Ingrese Codigo: ";
	cin>> estudiante.codigo;
	cin.ignore();
	cout<<"Ingrese Nombres: ";
	cin.getline(estudiante.nombres,50);
	cout<<"Ingrese Apellidos: ";
	cin.getline(estudiante.apellidos,50);
	cout<<"Ingrese telefono: ";
	cin>> estudiante.telefono;
	
	fwrite(&estudiante, sizeof(Estudiante),1,archivo);
	fclose(archivo);
	Leer();
}

void Borrar(){
	const char *nombre_archivo_temp = "archivo_temp.dat";
	FILE* archivo= fopen(nombre_archivo,"rb");
	FILE* archivo_temp= fopen(nombre_archivo_temp,"w+b");
	Estudiante estudiante;
	int id= 0, id_n= 0;
	cout<<"Ingrese el ID a eliminar: ";
	cin>> id;
	while(fread(&estudiante,sizeof(Estudiante),1,archivo)){
		if(id_n!= id){
			fwrite(&estudiante,sizeof(estudiante),1,archivo_temp);	
		}
		id_n++;
	}
	fclose(archivo);
	fclose(archivo_temp);
	
	archivo_temp= fopen(nombre_archivo_temp,"rb");
	archivo= fopen(nombre_archivo, "w+b");
	while(fread(&estudiante,sizeof(estudiante),1,archivo_temp)){
		fwrite(&estudiante,sizeof(estudiante),1,archivo);
	}
	fclose(archivo);
	fclose(archivo_temp);
	Leer();
}
