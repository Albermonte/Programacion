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
if(nombreRead==NULL || datos==NULL || *numDatos<0 || *numLineasIncorrectas<0)
{
	return -1;
}
else
{
	int i=1;
	char ch;
	FILE * fichero;
	*numDatos=0;
	*numLineasIncorrectas=0;
	
	if((fichero=fopen(nombreRead,"r"))==NULL)
	{
		return -1;
	}
	
	*datos=(dateTemp_t *)calloc(sizeof(dateTemp_t),RESERVA_MALLOC);
	if(*datos==NULL)
	{
		free(*datos);
		return -1;
	}
	
	while(!feof(fichero))
	{
  		ch = fgetc(fichero);
  		if(ch == '\n')
  		{
    			(*datos)[*numDatos].momento.anyo=0;
			(*datos)[*numDatos].momento.mes=0;
			(*datos)[*numDatos].momento.dia=0;
			(*datos)[*numDatos].temperatura=0;
			
			fscanf(fichero,"%d-%d-%d\t%f",&(*datos)[*numDatos].momento.anyo,&(*datos)[*numDatos].momento.mes,&(*datos)[*numDatos].momento.dia,&(*datos)[*numDatos].temperatura);
			
			if((*datos)[*numDatos].momento.anyo<1988 || (*datos)[*numDatos].momento.anyo>1991|| (*datos)[i].momento.mes<1 || (*datos)[i].momento.mes>12 || (*datos)[*numDatos].momento.dia<1 || (*datos)[*numDatos].momento.dia>31 || (*datos)[*numDatos].temperatura<-100 || (*datos)[*numDatos].temperatura>100)
			{
				*numDatos=*numDatos-1;
				*numLineasIncorrectas=*numLineasIncorrectas+1;
			}
			/*else
			{
				*numDatos=*numDatos+1;
			}*/
			
			printf("%d\n",*numDatos);
			*numDatos=*numDatos+1;
			if(*numDatos==RESERVA_MALLOC*i)			//realloc
			{
				i++;
				*datos=(dateTemp_t *)realloc(*datos,RESERVA_MALLOC*i);
			}
			
 		}
 		
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
