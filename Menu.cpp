#include <iostream>
#include <windows.h>
using namespace std;

int opcionmenu(int opcion);
int menu (){
	int opcion;
	system ("color f0");
	do {
		cout<<endl;
		cout<<"\tLes doy la mas cordial bienvenida."<<endl;
		cout<<"\tQue desea realizar? \n"<<endl;
		cout<<"\t1.-Ingreso de notas"<<endl;
		cout<<"\t2.-Consulta de notas"<<endl;
		cout<<"\t3.-Actualizacion de notas"<<endl;
		cout<<"\t4.-Eliminar notas"<<endl;
		cout<<"\t5.-Salir\n"<<endl;
		cout<< "\t Su respuesta es: ";
		cin>>opcion;
		opcionmenu (opcion);
	} while (opcion<5 && opcion>0);
	cout<<"Gracias por utilizar la aplicacion"<<endl;
	cout<<"Vuelva pronto"<<endl;
}
