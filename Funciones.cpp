#include <iostream>
using namespace std;

double ingreso_de_notas();
double consulta_de_notas();
double actualizacion_de_notas();
double eliminacion_de_notas();
int opcionmenu (int opcion){
	if (opcion==1){
	ingreso_de_notas();
	}else if (opcion==2){
	consulta_de_notas();	
	}else if (opcion==3){
	actualizacion_de_notas();
	}else if (opcion==4){
	eliminacion_de_notas();
	}
	return 0;	
}
