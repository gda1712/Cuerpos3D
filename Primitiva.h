#include "Cilindro.h"
#include "Cono.h"
#include "Ortoedro.h"
#include "Elipsoide.h"

#ifndef PrimitivaH
#define PrimitivaH

class Primitiva: Cono, Cilindro, Elipsoide, Ortoedro
{
private:
	char nombre[25];
	float volumen;
public:
	Primitiva();
	~Primitiva();
	
	void setvolumen(float volumen);
	float getvolumen();

	void setnombre(char nombre[]);
	char* getnombre();

	void recibirNombre(char *nombre);
};

#endif