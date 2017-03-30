/* Nombre Fichero: src/temperaturas.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "temperaturas.h"


#define RESERVA_MALLOC 400
#define LONG_NOMBRE 20

int leerFichero(const char* nombreRead, dateTemp_t** datos, int* numDatos, int* numLineasIncorrectas)
{
	int i=0;
	char ch;
	FILE * fichero;
	
	fichero=fopen(nombreRead,"r");
	
	*datos=malloc(sizeof(dateTemp_t));
	
	while(!feof(fichero))
	{
  		ch = fgetc(fichero);
  		if(ch == '\n')
  		{
    			*(datos)[i].momento.anyo=0;
			*(datos)[i].momento.mes=0;
			*(datos)[i].momento.dia=0;
			*(datos)[i].temperatura=0;
			fscanf(fichero,"%d-%d-%d\t%f",&datos[i].momento.anyo,&datos[i].momento.mes,&datos[i].momento.dia,&datos[i].temperatura);
			i++;
			//realloc
			*datos=realloc(*datos,sizeof(dateTemp_t)*i);
 		}
    }	
}

int calcularTempMaxima(const dateTemp_t* datos, int numDatos, float* temp, struct fecha_t* diaM)
{
      
}

int calcularTempMinima(const dateTemp_t* datos, int numDatos, float* temp, struct fecha_t* diaM)
{
     
}

int calcularTempMedia(const dateTemp_t* datos, int numDatos, float* temp)
{
   
}

int guardarFichero(const dateTemp_t* datos, int numDatos, const char* nombre)
{
   
}

int modificarRegistro(dateTemp_t** datos, int numDatos, struct fecha_t diaM, float temp)
{
    
}
