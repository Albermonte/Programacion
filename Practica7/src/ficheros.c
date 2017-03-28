/* Nombre Fichero: src/ficheros.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ficheros.h"
#include "cadenas.h"

#define LONG_NOMBRE 40
#define TAM_BUF 10

int abrirFicheroLectura(const char* nombre, FILE ** archivo)
{
	if(nombre==NULL)
	{
		return -1;
	}
	else
	{
		*archivo = fopen(nombre,"r");
		return ferror(*archivo);
	}
}

int escribirFicheroSinVocales(const char* nombre, const FILE * ficheroOriginal, FILE ** ficheroModificado, int* numCambios)
{
	if(nombre==NULL)
	{
		return -1:
	}
	else
	{
		int c=0;
		*numCambios=0;
		if(ficheroOriginal==NULL)
		{
			printf("Error de apertura de ficheroOriginal");
			return -1;
		}
		*ficheroModificado=fopen("prac07_prueba01SinVocales.txt","w");
		if(ficheroModificado==NULL)
		{
			printf("Error de apertura de ficheroModificado");
			return -1;
		}
		while(c!=EOF)
		{	
			c=fgetc(ficheroOriginal);
			if(c!='a' || c!='e' || c!='i' || c!='o' || c!='u')
			{
				fwrite(c,1,sizeof(c),*ficheroModificado);
				*numCambios=*numCambios-1;
			}
			*numCambios=*numCambios+1;
		}
		fclose(*ficheroModificado);
		return 0;
	}
}
