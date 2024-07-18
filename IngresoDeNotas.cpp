#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <cstdlib>            


using namespace std;
string nombre, apellido, materia;
int cedula;
float nota;
char opcion;
double ingreso_de_notas(){
    do{
    ofstream Registro_Notas("Registro.txt", ios::out );
		if (Registro_Notas){
			system ("cls");
			cout<<"\n";
			cout<<"\tIngresa la Cedula del estudiante:   ";
	        cin>>cedula;
			cout<<"\tIngresa el nombre del estudiante:   ";
	        cin>>nombre;
	        cout<<"\tIngresa el apellido del estudiante: ";
	        cin>>apellido;
	        cout<<"\tIngresa la materia del estudiante:  ";
	        cin>>materia;
	        cout<<"\tIngresa la nota del estudiante:     ";
	        cin>>nota;
	        Registro_Notas<<cedula<<" "<<nombre<<" "<<apellido<<" "<<materia<<" "<<nota<<endl;
	        cout<<"\n\tRegistro exitoso"<<endl;
	        cout<<"\n\tDeseas ingresar otro estudiante? (S/N): ";
	        cin>>opcion;
		}else{
	    cout<<"El archivo no se pudo abrir \n";
	    }
    }while (opcion=='S' || opcion=='s');
	system ("cls");
}

