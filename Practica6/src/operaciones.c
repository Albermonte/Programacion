/* Nombre Fichero: src/operaciones.c */

#include "operaciones.h"

int realizarOperacion(double op1, double op2, char operacion)
{
	if(operacion=='/' && op2==0)
	{
		return -1;
	}
	else
	{
		float resultado;
		switch(operacion)
		{
			case '+':
				printf("Suma: \n");
				resultado = op1 + op2;
				break;
			case '-':
				printf("Resta: \n");
				resultado = op1 - op2;
				break;
			case '*':
				printf("Multipicacion: \n");
				resultado = op1 + op2;
				break;
			case '/':
				printf("Division: \n");
				resultado = op1 / op2;
				break;
			default:
				printf("Introduce una operacion correcta\n\n");
		}
			
		printf(" Resultado: %f",resultado);
		return resultado;
	}
}
