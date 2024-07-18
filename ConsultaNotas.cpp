#include <iostream>
#include <fstream>      
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

void imprimirLinea( int cedula, const string &nombre,  const string &apellido, const string &materia, int nota );
int consulta_de_notas(){
	int cedula, nota;
	string nombre, apellido, materia;
	ifstream Registro_Notas( "Registro.txt", ios::in );
	if ( Registro_Notas ){
		system ("cls");
		cout << endl << left << setw( 13 ) << "Cedula" << setw( 13 ) 
		<< "Nombre" << setw( 13 ) <<"apellido" << setw ( 13 ) << "Materia" << "Nota" << endl << fixed << showpoint;
	    while ( Registro_Notas >> cedula >> nombre >> apellido >> materia >> nota )
	       imprimirLinea( cedula, nombre, apellido, materia, nota );
	       system ("pause");
	       system ("cls");
	    }
}
void imprimirLinea( int cedula, const string &nombre,  const string &apellido, const string &materia, int nota )
{
   cout << left << setw( 13 ) << cedula << setw( 13 ) << nombre << setw( 13 ) << apellido << setw( 6 ) << materia
	<< setw( 5 ) << setprecision( 2 ) << right << nota << endl;
	cout<<endl<<endl;
}
