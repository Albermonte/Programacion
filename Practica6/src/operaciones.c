/* Nombre Fichero: src/operaciones.c */

#include "../include/operaciones.h"

int realizarOperacion(double op1, double op2, char operacion)
{
	if(operacion=='/' && op2==0)
	{
		return -1;
	}
	else
	{
		float resultado=0;
		
		printf("Operacion: %c\n",operacion);
		switch(operacion)
		{
			case '+':
				printf("Suma");
				resultado = op1 + op2;
				break;
			case '-':
				printf("Resta");
				resultado = op1 - op2;
				break;
			case '*':
				printf("Multipicacion");
				resultado = op1 + op2;
				break;
			case '/':
				printf("Division");
				resultado = op1 / op2;
				break;
			default:
				printf("Introduce una operacion correcta\n\n");
		}
			
		printf(" resultado: %f",resultado);
		return resultado;
	}
}
