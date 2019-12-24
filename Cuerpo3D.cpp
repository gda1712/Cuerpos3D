#include <iostream>
#include <string>
#include "Cuerpo3D.h"

using namespace std;

//CONSTRUCTORES
Cuerpo3D::Cuerpo3D()//Constructor por defecto, no inicializa vector
{
	strcpy(this -> nombre, " ");
	this -> Nprim = 0;
}


Cuerpo3D::Cuerpo3D(int tamanoVector)//Constructor Paramétrico, inicializa vector
{
	strcpy(this -> nombre, " ");
	this -> Nprim = 0;
	vectorPrimitivas = new Primitiva*[tamanoVector];

	for (int i = 0; i < tamanoVector; ++i)
		vectorPrimitivas[i] = new Primitiva();
}


//Métodos de nombre
void Cuerpo3D::setnombre(char nombre[])
{
	strcpy(this -> nombre, nombre);
}
char* Cuerpo3D::getnombre()
{
	return this -> nombre;
}


//Métodos de Nprim
void Cuerpo3D::setNprim(int Nprim)
{
	this -> Nprim = Nprim;
}
int Cuerpo3D::getNprim()
{
	return this -> Nprim;
}


void Cuerpo3D::inicializarvectorPrimitivas()
{
	vectorPrimitivas = new Primitiva*[this -> Nprim];

	for (int i = 0; i < this -> Nprim; ++i)//Inicializa los cuerpos3d
		vectorPrimitivas[i] = new Primitiva();
}


void Cuerpo3D::setvectorPrimitivas()
{
	for (int i = 0; i < Nprim; ++i)
	{
		char nombre[25];
		limpiar_pantalla();//FUNCIÓN QUE MIRA SI ES LINUX O WINDOWS, Y USA SYSTEM()
		cout << this -> nombre << endl;
		cout << "Ingrese el nombre de la primitiva: ";
		cin >> nombre;
		vectorPrimitivas[i] -> recibirNombre(nombre);//LLAMA METODO EN PRIMITIVA
	}
	
}

//RETORNA EL NOMBRE DE LA PRIMIITVA A ESCENA::MOSTRARESCENA
char *Cuerpo3D::getvectorPrimitivasNombre(int i)
{
	return vectorPrimitivas[i] -> getnombre();
}


//RETORNA EL VOLUMEN DE LA PRIMITIVA A ESCENA::MOSTRARESCENA
float Cuerpo3D::getvectorPrimitivasVolumen(int i)
{
	return vectorPrimitivas[i] -> getvolumen();
}

//RETORNA EL VOLUMEN TOTAL DE LAS FIGURAS 3D
float Cuerpo3D::volumenTotal()
{
	float volumenT = 0.0;
	for (int i = 0; i < Nprim; ++i)
	{
		volumenT += vectorPrimitivas[i] -> getvolumen();
	}

	return volumenT;
}