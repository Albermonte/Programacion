/* Nombre Fichero: src/prog05.c */

#include "prog05.h"

int inicializarPunteros(Cliente_t *array, Cliente_t **punteros, int tam) {
	if(array<1 || punteros<1 || tam!=MAX_ARRAY)
	{
		return -1;
	}
	
	else
	{
		int i;
		for(i=0;i<tam;i++)
		{
			punteros[i] = &array[i];
		}

		return 0;
	}
}

int introducirCliente(Cliente_t *array, int tam, int* n, char* nombre, char* apellido, float ingresos) {
   if(array<1 || tam!=MAX_ARRAY || n<1 || nombre<1 || apellido <1 || ingresos<0)
   {
   		return -1;
   }
   
   else
   {
	   strcpy(array[*n].nombre,nombre);
	   strcpy(array[*n].apellido,apellido);
	   array[*n].ingresos=ingresos;
	   *n=*n+1;
	   
	   return 0;
   }
}

int mostrarDatosArrayEstructuras(const Cliente_t* array, int tam, int n) {
   if(array<1 || tam!=MAX_ARRAY || n>tam || n<1)
   {
   		return -1;
   }
   
   else
   {
	   int i;
	   for(i=0;i<n;i++)
	   {
	   printf("Nombre: %s, Apellido: %s, Ingresos: %f\n",array[i].nombre,array[i].apellido,array[i].ingresos);
	   }
	   
	   return 0;
   }
}

int mostrarDatosArrayPunteros(Cliente_t **punteros, int tam, int n) {
  if(punteros<1 || tam!=MAX_ARRAY || n>tam || n<1)
  {
  	return -1;
  }
  
  else
  {
	  int i;
	  for(i=0;i<n;i++)
	  {
	  printf("Nombre: %s, Apellido: %s, Ingresos: %f\n",*punteros[i]->nombre,*punteros[i]->apellido,punteros[i]->ingresos);
	  }
	  
	  return 0;
  }
}

float calcularVarianzaIngresosArrayEstructuras(const Cliente_t *array, int tam, int n) {
	if(array<1 || tam!=MAX_ARRAY || n>tam || n<1)
	{
		return -1;
	}
	
	else
	{
		int i, vari=0, ingresos=0, media=0;
	 	for(i=0;i<n;i++)
	 	{
	 		media=media+array[i].ingresos;
	 	}
	 	
	 	media=media/n;
	 	
	 	for(i=0;i<n;i++)
		{
			ingresos=ingresos+array[i].ingresos;
		}
		vari=((pow((ingresos-media),2))/n);
	
		return vari;
	}
}

int ordenarPorNombreArrayPunteros(Cliente_t **punteros, int tam, int n) {
	if(punteros<1 || tam!=MAX_ARRAY || n<1 || n>tam)
	{
 		return -1;
  	}

	else
	{
	int i,j;
	Cliente_t *temp;
	for(i=0; i<n; i++) 
	{
 		for(j=0; j<n; j++) 
 	 	{
  			if(strcmp(*punteros[j]->nombre, *punteros[j+1]->nombre) > 0) 
  			{
			temp = punteros[j];
			punteros[j] = punteros[j+1];
			punteros[j+1] = temp;
			}
    	}
	}
  
		return 0;
	}
}
