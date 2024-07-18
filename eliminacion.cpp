#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main ()
{
    ofstream aux;
    ifstream lectura;

    bool encontrado=false;

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()){

        cout<<"\n";
        cout<<"\tIngresa la clave del alumno que deseas eliminar: ";
        cin>>auxclave;
            
            ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
            ///hasta llegar al final del archivo gracias a la función .eof()
            lectura>>clave;
            while (!lectura.eof()){
                lectura>>nombre>>semestre>>grupo>>edad;
                if (auxclave==clave){
                        encontrado=true;
                        cout<<"\n";
                        cout<<"\tClave:    "<<clave<<endl;
                        cout<<"\tNombre:   "<<nombre<<endl;
                        cout<<"\tSemestre: "<<semestre<<endl;
                        cout<<"\tGrupo:    "<<grupo<<endl;
                        cout<<"\tEdad:     "<<edad<<endl;
                        cout<<"\t________________________________\n\n";
                        cout<<"\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                        cin>>opca;

                        if (opca=='S' or opca=='s'){
                            cout<<"\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                        }else{
                            aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                        }

                    }else{
                        aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                    }
                lectura>>clave;
            }
    }else{
        cout<<"\n\tEl archivo no se pudo abrir \n";
    }

    if (encontrado==false){
                cout<<"\n\tNo se encontro ningun registro con la clave: "<<auxclave<<"\n\n\t\t\t";
            }

    aux.close();
    lectura.close();
    remove ("alumnos.txt");
    rename("auxiliar.txt", "alumnos.txt");
}
