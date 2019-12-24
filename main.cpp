#include <iostream>
#include "Escena.h"
#include "Escena.cpp"
#include "Cuerpo3D.cpp"
#include "Primitiva.cpp"
#include "Cuerpo3D.h"
#include "Primitiva.h"
#include "Cilindro.h"
#include "Cono.h"
#include "Ortoedro.h"
#include "Elipsoide.h"

using namespace std;

void llenarEscena(Escena *escena);


int main()
{
	Escena escena;
	cout << "¡Bienvenido al programa!" << endl;
	cout << "Primitivas: 'Cono' 'Cilindro' 'Ortoedro' 'Elipsoide'" << endl << endl;

	llenarEscena(&escena);
	
	escena.llenarPrimitivas();
	escena.mostrarEscena();

	return 0;
}

//LLENA SOLO LA ESCENA, NO LOS CUERPOS NI LAS PRIMITIVAS
void llenarEscena(Escena *escena)
{
	char nombre[25];
	int Ncuerpos;

	cout << "Ingrese el nombre de la escena: ";
	cin >> nombre;
	escena -> setnombre(nombre);

	cout << "Ingrese la cantidad de cuerpos de " << nombre << ": ";
	cin >> Ncuerpos;
	cout << endl << endl;
	escena -> setNcuerpos(Ncuerpos);

	escena -> inicializarvectorCuerpo3D();

	escena -> setvectorCuerpo3D();
}