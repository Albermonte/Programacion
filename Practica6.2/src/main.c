/* Nombre Fichero: src/main.c */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "potencia.h"
#include "argumentos.h"

int main(int argc, char** argv)
{
    int op = 0;
    int res = 0;

    leerArgs(argc, argv, &op);

    if (op <= 0 ) 
    {
	printf("Operacion inválida.\n");
    	return -1;
    }
    else 
    {
    	res = potencia(op, op);
    	printf("%d ^ %d = %d\n", op, op, res);

	if (res == pow(op, op))
	  printf("Ejercicio correcto.\n");
    	else
	  printf("Ejercicio no correcto.\n");
    	
	return 0;
    }

}
