#include "Primitiva.h"

#ifndef Cuerpo3DH
#define Cuerpo3DH

class Cuerpo3D
{
private:
	char nombre[25];
	int Nprim;
	Primitiva ** vectorPrimitivas;
public:
	Cuerpo3D();
	Cuerpo3D(int tamanoVector);
	
	~Cuerpo3D();

	void setnombre(char nombre[]);
	char *getnombre();

	void setNprim(int Nprim);
	int getNprim();
	
	void inicializarvectorPrimitivas();
	void setvectorPrimitivas();
	char *getvectorPrimitivasNombre(int i);
	float getvectorPrimitivasVolumen(int i);

	float volumenTotal();
};

#endif