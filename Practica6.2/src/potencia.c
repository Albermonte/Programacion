/* Nombre Fichero: src/potencia.c */

#include "potencia.h"

int potencia(int op, int n)
{
	if(n>1)
	{
		return op*potencia(op,n-1);
	}
	
	
	return op;
}
