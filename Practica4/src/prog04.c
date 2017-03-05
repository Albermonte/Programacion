#include "../include/prog04.h"

int introducirCiudad(Ciudad_t* datos, int tam, int* n, const char* nombre, int poblacion)
{
	if(datos<=0 || tam <=0 || n<=0 || strlen(nombre)>tam || poblacion<=0)
	{
		return -1;
	}
	else
	{
		
		strcpy(datos[*n].nombre,nombre);
		datos[*n].poblacion=poblacion;

		*n=*n+1;

		return 0;
	}
}



int mostrarCiudades(Ciudad_t* datos, int tam, int n)
{
	if(datos<=0 || tam<=0 || n<=0)
	{
		return -1;
	} 
	
	else
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("La ciudad %s tiene una poblacion de %d habitantes \n",datos[i].nombre, datos[i].poblacion);
		}
	return 0;
	}
}


int mostrarCiudadesDespobladas(Ciudad_t* datos, int tam, int n)
{
	if(datos<=0 || tam<=0 || n<=0)
	{
		return -1;
	}
	else
	{
		int i,c=0;
		for(i=0;i<n;i++)
		{
			if(datos[i].poblacion<100)
			{
				printf("%s\n",datos[i].nombre);
				c++;				
			}
		}
	return c;
	}
}


int buscarCiudadMasPoblada(Ciudad_t* datos, int tam, int n)
{
	if(datos<=0 || tam<=0 || n<=0)
	{
		return -1;
	}
	else
	{
		int i,a=0,b;
		for(i=0;i<n;i++)
		{
			if(a<datos[i].poblacion)
			{
				a=datos[i].poblacion;
				b=i;
			}
		}
		return b;
	}	

}


float calcularPoblacionMedia(Ciudad_t* datos, int tam, int n)
{
	if(datos<=0 || tam<=0 || n<=0)
	{
		return -1;
	}
	else
	{
		int i,c=0;
		for(i=0;i<n;i++)
		{
			c=c+datos[i].poblacion;
		}
		c=c/n;
		return c;
	}	
}



int ordenarCiudadesPorPoblacion(Ciudad_t* datos, int tam, int n, int orden)
{
	if(datos<=0 || tam<=0 || n<=0)
	{
		return -1;
	}
	else
	{
		
		if(orden==1) //Ordenar por poblacion descendente
		{
			
			int i, j;
			Ciudad_t b;
			for (i = n; i>=0; i--)
			{
				for (j = n; j>=0; j--)
				{
					if (datos[j].poblacion < datos[j + 1].poblacion)
					{
						b = datos[j];
						datos[j] = datos[j + 1];
						datos[j + 1] = b;
					}
				}

			}
			return 0;
		}
		else if(orden==-1) //Ordenar por poblacion ascendente
		{
			int i, j;
			Ciudad_t b;
			for (i = 0; i<n; i++)
			{
				for (j = 0; j<n; j++)
				{
					if (datos[j].poblacion > datos[j + 1].poblacion)
					{
						b = datos[j];
						datos[j] = datos[j + 1];
						datos[j + 1] = b;
					}
				}
			}
			return 0;
		}
		
		else
		{
			return -1;
		}
	}
}



