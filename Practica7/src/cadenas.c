/* Nombre Fichero: src/cadenas.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "cadenas.h"

#define LONG_NOMBRE 40

void modificarNombre(const char* nombre, char ** nombreNuevo)
{
	if(nombre==NULL)
	{
		*nombreNuevo="SinVocales.txt";
	}
	else
	{
	
	//nombreNuevo = nombre-4 + SinVocales + .txt

	int i, j, k, tam, c=0;
	char aux[]="SinVocales";
	tam=strlen(nombre)+10; //SinVocales=10
	*nombreNuevo=malloc(tam);
	
	for(i=0;i<strlen(nombre)-4;i++)
	{
		*nombreNuevo[i]=nombre[i];
	}
	
	for(j=i+1;j<10;j++)
	{
		*nombreNuevo[j]=aux[c];
		c++;
	}
	
	aux[]=".txt";
	c=0;
	
	for(k=j+1;k<4;k++)
	{
		*nombreNuevo[j]=aux[c];
		c++;
	}
	

	}
}

void vocalAx(char* cadena, int n, int* numCambios)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u')
		{
			cadena[i]="x";
			*numCambios+=1;
		}
	}
}
