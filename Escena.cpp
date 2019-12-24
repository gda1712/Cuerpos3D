#include <iostream>
#include <string.h>
#include "Escena.h"

using namespace std;

//IGNORAR, NO FORMA PARTE DE LA CLASE, SOLO PARA LIMPIAR PANTALLA
void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

//CONSTRUCTORES
Escena::Escena()//Constructor por defecto, No inicializa VectorCuerpo3D
{
	strcpy(this -> nombre, " ");
	Ncuerpos = 0;
}

Escena::Escena(int cantCuerpos)//Constructos con inicialización de VectorCuerpo3d
{
	strcpy(this -> nombre, " ");
	Ncuerpos = 0;
	vectorCuerpo3D = new Cuerpo3D*[cantCuerpos];

	for (int i = 0; i < cantCuerpos; ++i)//Inicializa los cuerpos3d
		vectorCuerpo3D[i] = new Cuerpo3D();
}


//DESTRUCTORES
Escena::~Escena()
{
	cout << "Objeto destruido" << endl << endl;
}

//Métodos de nombre
void Escena::setnombre(char nombre[])
{
	strcpy(this -> nombre, nombre);
}
char* Escena::getnombre()
{
	return this -> nombre;
}

//Métodos de Ncuerpos
void Escena::setNcuerpos(int Ncuerpos)
{
	this -> Ncuerpos = Ncuerpos;
}
int Escena::getNcuerpos()
{
	return this -> Ncuerpos;
}


//MÉTODO QUE INICIALIZA EL VECTORCUERPO3D
void Escena::inicializarvectorCuerpo3D()
{
	vectorCuerpo3D = new Cuerpo3D*[this -> Ncuerpos];

	for (int i = 0; i < this -> Ncuerpos; ++i)//Inicializa los cuerpos3d
		vectorCuerpo3D[i] = new Cuerpo3D();
}


//Método de vectorCuerpo3D
void Escena::setvectorCuerpo3D()//Inicia los elementos del vector Cuerpo3D, SIN PRIMITIVAS
	{
		for (int i = 0; i < this -> Ncuerpos; ++i)
		{
			char nombreC[25];
			int numeroPrim;

			cout << "Introduce el nombre del cuerpo3D: ";
			cin >> nombreC;
			vectorCuerpo3D[i] -> setnombre(nombreC);

			cout << "Introduce el número de primitivas del cuerpo " << nombreC << ": ";
			cin  >> numeroPrim;
			vectorCuerpo3D[i] -> setNprim(numeroPrim);
			cout << endl << endl;
		}
	}


void Escena::llenarPrimitivas()
{
	for (int i = 0; i < this -> Ncuerpos; ++i)
	{
		vectorCuerpo3D[i] -> inicializarvectorPrimitivas();
		vectorCuerpo3D[i] -> setvectorPrimitivas();
	}
}


void Escena::mostrarEscena()
{
	limpiar_pantalla();//FUNCIÓN QUE MIRA SI ES LINUX O WINDOWS, Y USA SYSTEM()
	cout << nombre << endl << endl;

	for (int i = 0; i < Ncuerpos; ++i)
	{
		cout << "Cuerpo : " << vectorCuerpo3D[i] -> getnombre() << endl;

		for (int j = 0; j < vectorCuerpo3D[i] -> getNprim(); ++j)
		{
			cout << "Primitiva " << j + 1 << " " << vectorCuerpo3D[i] -> getvectorPrimitivasNombre(j);
			cout << endl << "Volumen: " << vectorCuerpo3D[i] -> getvectorPrimitivasVolumen(j) << endl;
		}
		cout << "EL volumen total es: " << vectorCuerpo3D[i] -> volumenTotal() << endl;
		cout << endl << endl;
	}
}