/* Nombre Fichero: src/argumentos.c */

#include "../include/argumentos.h"

int leerArgs(int argc, char **argv, double *op1, double *op2, char *operacion)
{
	if(0/*strlen(argv[2])!=1*/)
	{
		return -1;
	}
	else
	{
	int i;
	switch(argc)
	{
		case 4:
			*op1=atof(argv[1]);
			*op2=atof(argv[3]);
			printf("Op:%s\n",argv[2]);
			*operacion=argv[2][0];
			break;
		case 3:
			for(i=0;i<10 /*strlen(argv[1][1])*/;i++)
			{
				if(argv[1][i]=='+')
				{
					strcpy(operacion,"+");
					printf("Suma %s",operacion);
				}
				
			break;
			}		
		
	}
	return 0;
	}
}
