#include <iostream>
#include "Persona.cpp"

using namespace std;

class Estudiante : Persona{
	// atributos
	private : string carnet;
	// constructor
	public :
		Estudiante(){
			
		}
		
		Estudiante(string nom, string ape, string dir, int tel, string fn, string car) 
		   : Persona(nom, ape, dir, tel, fn){
		   	
			carnet= car;
		}
		
		// metodos Polimorfismo cuando dos metodos se llaman igual y estan en diferente clase
		void leer(){
			cout<<carnet<<endl;
			cout<<nombres<<endl;
			cout<<apellidos<<endl;
			cout<<direccion<<endl;
			cout<<telefono<<endl;
			cout<<fecha_nacimiento<<endl;
		}
};
