/* Nombre Fichero: include/temperaturas.c */

#include "temperaturas.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RESERVA_MEM 400


int leerFichero(const char *nom, dateTemp_t **datos, int *num,  int *lin)
{
	FILE *pf=NULL;
	int i=0,j=0;
	int anyo=0,mes=0,dia=0;
	float temperatura=0;
	int numfcorrectas=0,numfincorrectas=0;
	dateTemp_t *aux;
	
	
	if ((pf=fopen(nom,"rb+"))==NULL)   //Abrir fichero 
 	{ 	//El fichero no existe, lo creamos
   		if ((pf=fopen(nom, "wb+"))==NULL) { printf("Error de apertura de %s",nom); exit(1); }
 	}
	if(ferror(pf)==1)
	{
		clearerr(pf);
		fclose(pf);
		return -1;
	}

	aux=(dateTemp_t*)malloc(RESERVA_MEM*sizeof(dateTemp_t));
	*datos=(dateTemp_t*)malloc(RESERVA_MEM*sizeof(dateTemp_t));

	rewind(pf);
	
	printf("aqui\n");
					
	do
	{
	fscanf(pf,"%d-%d-%d\t%f\n",&anyo,&mes,&dia,&temperatura);
	
		*datos=realloc(*datos,RESERVA_MEM*j*sizeof(dateTemp_t));
		aux=realloc(*datos,RESERVA_MEM*j*sizeof(dateTemp_t));
	
		if(anyo>=1988 && anyo<=1991 && mes>=0 && mes<=12 && dia>=0 && dia<=31 && temperatura>-100 && temperatura<100)
		{	
			aux[i].momento.anyo=anyo;
			aux[i].momento.mes=mes;
			aux[i].momento.dia=dia;
			aux[i].temperatura=temperatura;
			
			numfcorrectas++;
		}
		
		if(anyo<1988||anyo>1991||mes<0||mes>12||dia<0||dia>31||temperatura<-100||temperatura>100)
		{
			printf("dato no guardado %d %d %d\t%f\n",anyo,mes,dia,temperatura);
			numfincorrectas++;
		}
		i++;
		j++;
		
		
	}while (!feof(pf) && !ferror(pf));

	for(i=0;i<numfcorrectas;i++)
	{
		(*datos)[i].momento.anyo=aux[i].momento.anyo;
		(*datos)[i].momento.mes=aux[i].momento.mes;
		(*datos)[i].momento.dia=aux[i].momento.dia;
		(*datos)[i].temperatura=aux[i].temperatura;
	}

	*num=numfcorrectas;
	*lin=numfincorrectas;
	
	return 0;
}


int guardarFichero(const dateTemp_t *dat,  int num, const char *nom)
{
	FILE *pf;

	if(dat==NULL||num<=0||nom==NULL)
		return -1;


	if ((pf=fopen(nom,"rb+"))==NULL)   //Abrir fichero 
 	{ 	//El fichero no existe, lo creamos
   		if ((pf=fopen(nom, "wb+"))==NULL) { printf("Error de apertura de %s",nom); exit(1); }
 	}
	if(ferror(pf)==1)
	{
		clearerr(pf);
		fclose(pf);
		return -1;
	}
	rewind(pf);
	fwrite(dat,sizeof(dateTemp_t),num,pf);		//Copiamos los elementos
	fclose(pf);
	return 0;
}


int modificarRegistro(dateTemp_t **dat, int num, struct fecha_t fec, float temp)
{

	int i=0,registro=0;

	for(i=0;i<num;i++)
	{
		if((*dat)[i].momento.anyo==fec.anyo && (*dat)[i].momento.mes==fec.mes && (*dat)[i].momento.dia==fec.dia)
			registro=i;
	}

	(*dat)[registro].temperatura=temp;

	if((*dat)[registro].momento.anyo<1988||(*dat)[registro].momento.anyo>1991||(*dat)[registro].momento.mes<0||(*dat)[registro].momento.mes>12||(*dat)[registro].momento.dia<0||(*dat)[registro].momento.dia>31||(*dat)[registro].temperatura<-100||(*dat)[registro].temperatura>100)
		{
			return -1;
		}

	return 0;
}


int calcularTempMaxima(const dateTemp_t *dat, int num, float *temp, struct fecha_t *fec)
{
	int i=0,registro=0;
	float max;

	if(dat==NULL)
		return-1;

	if(num<=0)
		return -1;

	for(i=0;i<num;i++)
	{
		if(dat[i].temperatura>max && dat[i].temperatura>-100 && dat[i].temperatura<100 && dat[i].momento.anyo>=1988 && dat[i].momento.anyo<=1991 && dat[i].momento.mes>=0 && dat[i].momento.mes<=12 && dat[i].momento.dia>=0 && dat[i].momento.dia<=31)
		{
			max=dat[i].temperatura;
			registro=i;
		}
	}

	*fec=dat[registro].momento;
	*temp=max;
	return 0;
}




int calcularTempMinima(const dateTemp_t *dat, int num, float *temp, struct fecha_t *fec)
{
	int i=0,registro=0;
	float min=0;

	if(dat==NULL)
		return-1;

	if(num<=0)
		return -1;

	for(i=0;i<num;i++)
	{
		if(dat[i].temperatura<min && dat[i].temperatura>-100 && dat[i].temperatura<100 && dat[i].momento.anyo>=1988 && dat[i].momento.anyo<=1991 && dat[i].momento.mes>=0 && dat[i].momento.mes<=12 && dat[i].momento.dia>=0 && dat[i].momento.dia<=31)
		{
			min=dat[i].temperatura;
			registro=i;
		}
	}
	*fec=dat[registro].momento;
	*temp=min;
	return 0;
}


int calcularTempMedia(const dateTemp_t *dat, int num, float *temp)
{
	double suma=0;
	int i=0,j=0;
	
	if(dat==NULL)
		return-1;

	
	if(num<=0)
		return -1;

	for(i=0;i<num;i++)
	{
		if(dat[i].temperatura>-100 && dat[i].temperatura<100 && dat[i].momento.anyo>=1988 && dat[i].momento.anyo<=1991 && dat[i].momento.mes>=0 && dat[i].momento.mes<=12 && dat[i].momento.dia>=0 && dat[i].momento.dia<=31)
		{
			suma=dat[i].temperatura+suma;
			j++;
		}
	}
	*temp=suma/num;
	
	return 0;
}
































