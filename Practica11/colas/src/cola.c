/* Nombre Fichero: src/cola.c */

#include "cola.h"

/*Añade un nuevo nodo al principio de la lista y rellena el nodo con la matrícula pasada como parametro.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista.
 [IN] coche. Nuevo elemento a añadir.
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirPrincipio(Coche_t** pcab, const char* matricula)
{
	if (matricula == NULL || pcab == NULL)
	{
		return -1;
	}
	Coche_t* nodo;
	nodo = (Coche_t*)malloc(sizeof(Coche_t));
	if (nodo == NULL)
	{
		return -1;
	}
	else
	{
		strcpy(nodo->matricula, matricula);

		nodo->sig = *pcab;
		*pcab = nodo;
	}
	return 0;
}

/*Muestra por pantalla informacion sobre la lista
 [IN] pcab. Puntero a la lista a mostrar por pantalla
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int listar(Coche_t* pcab)
{
	if (pcab == NULL)
	{
		return -1;
	}
	Coche_t* coche = NULL;
	coche = pcab;
	while (coche != NULL)
	{
		printf("Matricula:%s\n", coche->matricula);
		coche = coche->sig;
	}

	return 0;
}

/*Borra el ultimo elemento de la lista
 [IN/OUT] incio. Dirección del puntero al primer nodo de la lista
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int borrarAlFinal(Coche_t** pcab)
{
	if (pcab == NULL)
	{
		return -1;
	}
	Coche_t *coche = *pcab, *cocheAnt = NULL;
	if (coche == NULL)
	{
		return -1;
	}
	if (coche->sig == NULL)
	{
		free(coche);
		*pcab = NULL;
		return 0;
	}
	else
	{
		while (coche->sig != NULL)
		{
			cocheAnt = coche;
			coche = coche->sig;
		}
		free(cocheAnt->sig);
		cocheAnt->sig = NULL;
		return 0;
	}
}

/*Libera toda la memoria reservada.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista*/
void liberarMemoria(Coche_t** pcab)
{
	Coche_t* nodo = *pcab;
	while(nodo != NULL)
	{
		*pcab = (*pcab)->sig;
		free(nodo);
		nodo = *pcab;
	}
}

