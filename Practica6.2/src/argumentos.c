/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"

void leerArgs(int argc, char **argv, int *op)
{
	if(argc!=2)
	{
		printf("Introduce un numero solo\n");
	}
	else if (atoi(argv[1])<0 || atoi(argv[1])>9)
	{
		printf("Introduce un numero positivo o menor que 10\n");
	}
	else
	{
		*op=atoi(argv[1]);
	}
}
