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
	*archivo = fopen(nombre,"r");
	return ferror(*archivo);
}

int escribirFicheroSinVocales(const char* nombre, const FILE * ficheroOriginal, FILE ** ficheroModificado, int* numCambios)
{
	int c;
	ficheroOriginal=fopen(nombre,"r");
	*ficheroModificado=fopen("prac07_prueba02.txt","w");
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
	/*FILE *fp;
    char a;

    fp = fopen(*ficheroModificado,"r");
    while(1)
    {
       a = fgetc(ficheroModificado);
       if( feof(ficheroModificado) )
       {
          break ;
       }
       printf("%c", a);
    }
    fclose(ficheroModificado); */
}
