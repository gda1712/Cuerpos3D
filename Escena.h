#include "Cuerpo3D.h"

#ifndef EscenaH
#define EscenaH

class Escena
{
private:
	char nombre[25];
	int Ncuerpos;
	Cuerpo3D ** vectorCuerpo3D;
public:
	Escena();
	Escena(int cantCuerpos);
	~Escena();

	void setnombre(char nombre[]);
	char *getnombre();

	void setNcuerpos(int Ncuerpos);
	int getNcuerpos();
	
	void inicializarvectorCuerpo3D();
	void setvectorCuerpo3D();

	void llenarPrimitivas();
	void mostrarEscena();
};

#endif