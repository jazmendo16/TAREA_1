#include <iostream>
#include "Estudiante.cpp"
using namespace std;

main(){
	// instanciar el objeto a la clase
	Estudiante estudiante = Estudiante("Axel", "Cardona", "Guatemala", 444, "27/01/2005", "202307856");
	
	estudiante.leer();
	 
}
