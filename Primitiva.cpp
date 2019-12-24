#include <string>
#include "Primitiva.h"


Primitiva::Primitiva()
{
	strcpy(nombre, " ");
	volumen = 0.0;
}


//Métodos de nombre
void Primitiva::setnombre(char nombre[])
{
	strcpy(this -> nombre, nombre);
}
char* Primitiva::getnombre()
{
	return this -> nombre;
}


//Métodos de volumen
void Primitiva::setvolumen(float volumen)
{
	this -> volumen = volumen;
}
float Primitiva::getvolumen()
{
	return this -> volumen;
}

//LLENA CADA PRIMITIVA
void Primitiva::recibirNombre(char *nombre)
{
	if (nombre[0] == 'C' && nombre[1] == 'o')
	{
		volumen = llenarCono();
	}

	if (nombre[0] == 'C' && nombre[1] == 'i')
	{
		volumen = llenarCilindro();
	}

	if (nombre[0] == 'O')
	{
		volumen = llenarOrtoedro();
	}

	if (nombre[0] == 'E')
	{
		volumen = llenarElipsoide();
	}
}